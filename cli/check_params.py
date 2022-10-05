
import nltk
import copy
import numbers
import json
import datetime
from master_enum import key_dic, enum_dic, parameter_dict

def version():
    return "1.0.10"

def check_params(data, autocorrect=True):
    """
    The single entry function for checking the params given 
    are valid and have a logical outome on the board

    Args:
        data: json object containing the configuration params

    Returns:
        True  : valid parameters
        False : An error message describing the problem
    """

    # Instantiate the dict that contains the messages that check_params creates telling the user what went wrong with the configuration
    # There are three types, Error, Warnings, and System
    #   Errors are problems encountered that will prevent the configuration of the CyDaq and must be addressed to continue
    #   Warnings are problems that should be addressed, but dont have to be. Some errors will become warnings if autocorrect is on
    #   System are information for the developer that can give insight into the pipeline of configuration if any problems arise
    if "messages" not in data:
        data["messages"] = {}
    if "errors" not in data["messages"]:
        data["messages"]["errors"] = []
    if "warnings" not in data["messages"]:
        data["messages"]["warnings"] = []
    if "system" not in data["messages"]:
        data["messages"]["system"] = []


    # Track the time it takes for the validation to occur
    a = datetime.datetime.now()
    # Because spell checking does not use the dependency tree, we will first check if the parameters are valid, then spell check if any problems arise
    valid = check_valid(data, parameter_dict)
    if(not valid):
        check_spelling(data, autocorrect) # There is a bug here where even though digital in and out dont need corner frequencies, this will still return errors because they are not found in the params. This wont matter in validation because validation follows the dependencies of the paramters.
    b = datetime.datetime.now()
    c = b - a
    # Report the validation time
    data["messages"]["system"].append("validation took {} microseconds".format(c.microseconds))
    return valid

def check_spelling(data, autocorrect):
    """
    Goes through the dictionary keys and values and checks if they match the vocabulary of master_enum

    Args:
        data: json object containing the configuration params
        autocorrect: boolean telling if misspellings should be corrected automatically
    Returns:
        True  : correct parameters
        False : incorrect paremeters
    """
    parameters = data["parameters"]
    valid = True
    # Sort the keys into 4 groups based on if they are spelled correctly and if they are in the vocabulary
    keys = check_set(list(parameters), list(key_dic.values()))
    # Sort the values into 4 groups based on if they are spelled correctly and if they are in the vocabulary
    values = check_set(list(parameters.values()), list(enum_dic.keys()))
    # If autocorrect is true, then replace the misspelled words with the word closest to it
    # If the correction is wrong, the user is responsable for using the right spelling of the parameter
    if autocorrect:
        # In the sets returned from check_set, the key is the original word, and the value is the word that autocorrect believes to be the intended word

        # For every parameter key in the mispelled array
        for key in keys["misspelled"][0].keys():
            # Get the word that the key will be corrected to
            value = keys["misspelled"][0][key]
            # Create a message to notify the user of the correction
            data["messages"]["warnings"].append("'{}' corrected to '{}'".format(key, value))
            # Add the corrected word to the parameters dictionary with the original value
            parameters[value] = parameters[key]
            # Delete the old parameter entry
            del parameters[key]
        for key in values["misspelled"][0].keys():
            # Get the word that the value will be corrected to
            value = values["misspelled"][0][key]
            # Create a message to notify the user of the correction
            data["messages"]["warnings"].append("'{}' corrected to '{}'".format(key, value))
            # Because you cannot directly find the key in a dict based on the value, we will traverse all keys in the dict, and if the value matches the misspelled value, a correction will be applied
            for key_data, value_data in parameters.items():    # for name, age in dictionary.iteritems():  (for Python 2.x)
                if value_data == key:
                    parameters[key_data] = value
    else:
        #If autocorrect is off, notify the user of the error and return false 
        for key in keys["misspelled"][0].keys():
            valid = False
            value = keys["misspelled"][0][key]
            data["messages"]["errors"].append("'{}' is misspelled, use 'autocorrect=True' to correct to '{}'".format(key, value))
        for key in values["misspelled"][0].keys():
            valid = False
            value = values["misspelled"][0][key]
            data["messages"]["errors"].append("'{}' is misspelled, use 'autocorrect=True' to correct to '{}'".format(key, value))
    # If there is a word within the parameters that cannot be matched to a vocab word, then it is an invalid entry, return false
    # Or there is a word that the checker expects to find, but cannot, then return false
    for value in keys["unrecognized"][0]:
        valid = False
        data["messages"]["errors"].append("'{}' could not be recognized".format(value))
    for value in keys["unfound"][0]:
        valid = False
        data["messages"]["errors"].append("'{}' could not be found".format(value))
    for value in values["unrecognized"][0]:
        valid = False
        data["messages"]["errors"].append("'{}' could not be recognized".format(value))
    return valid


def check_word(word, set):
    """
    Given a word and a vocabulary, return the word in the vocab that is closest to the given word.
    Provided that the distance between the words meets a minimum threshold

    Args:
        word: word that we are looking for the match to
        set: the vocabulary that we should expect to find the given word in
    Returns:
        min_word  : The word in the vocab that closely matches the given word
        "" : If no word is close enough to the given word, return an empty string
    """
    # If an empty word or vocab is empty, return nothing
    if(len(word) == 0):
        return ""
    if(len(set) == 0):
        return ""

    min_diff = 999999999
    min_word = ""
    # For every word in the set, find the distace from the word to the vocab and keep track of the closest word and the distace 
    for value in set:
        diff = nltk.edit_distance(word, value)
        if(diff < min_diff):
            min_diff = diff
            min_word = value

    # Calculate the confidence based on the distace from the min word
    confidence = 100 * ((len(word) - min_diff) / len(word))
    # If the confidence is greater than 20%, then the words are close enough to correct to
    if (min_diff > 0 and (confidence > 20.0)):
        return min_word
    else: 
        return ""

# data: a dictionary containing the list of words to find in the dictionary
# vocab: a set of words that we are expecting to find within the data dic.
def check_set(data_p, vocab_p):
    """
    Given a set of words and a vocabulary, sort the words based on ones that are in the vocab correctly spelled, incorrectly spelled, cannot be matched to a vocab word, and words that we expect to find, but dont

    Args:
        data_p: set of words that we are sorting
        vocab_p: the vocabulary that we expect to find the given words in
    Returns:
        json_obj  : a dict with the words sorted into 4 groups, explained below
    """
    # Instantiate the dict to sort the parameters
    json_obj = {
        "found":        [], # The given paramter was matched to a word in the set 
        "unfound":      [], # Words in the vocab that was not matched to a parameter
        "misspelled":   [], # A given paramter was matched, but was misspelled
        "unrecognized": []  # Given paramters that could not be matched with a vocab word
    }
    # Lists will be modified, so make a copy
    data = list(copy.deepcopy(data_p))
    vocab = list(copy.deepcopy(vocab_p))
    found_set = []
    misspelled_dict = {}

    # Remove numbers from the parameters to sanatize the inputs 
    for word in list(data):
        if(isinstance(word, numbers.Number)):
            data.remove(word)

    # If a direct match is made to a word in the vocab, place in 'found' array and remove from sets
    for word in list(vocab):
        if word in data:
            found_set.append(word)
            # Remove the word from the sets because we have correctly sorted it
            data.remove(word)
            vocab.remove(word)

    # Check every remaining word against the given vocabulary, if a match is found then place into 'misspelled' set with the corrected word
    for word in list(data):
        correction = check_word(word, vocab)
        if(len(correction) > 0):
            misspelled_dict[word] = correction
            # Remove the word from the sets because we have correctly sorted it
            data.remove(word)
            vocab.remove(correction)

    # Add the sorted words to the returning set
    json_obj["found"].append(found_set)
    json_obj["unfound"].append(vocab)
    json_obj["misspelled"].append(misspelled_dict)
    json_obj["unrecognized"].append(data)

    return json_obj

def check_valid(data, dep_dict):
    """
    Given a dictionary with the expected parameters, and the parameter dependency structure, return true or false if the parameters meet the constraints established by the parameter dependency structure.

    Args:
        data: set of parameters
        dep_dict: the parameter dependency structure
    Returns:
        True  : the given parameters are valid
        False: the given parameters are not valid
    """

    # Extract the parameters from the given dataset and establish the current node pointer to be the root of the dependency structure
    parameters = data["parameters"]
    # node_pr is a string referring to the node that is currently being traversed
    node_pr = dep_dict["root"]

    # While we have not reached the end of the dependency graph
    while(node_pr is not None):
        # node is the structure that node_pr points to
        node = dep_dict[node_pr]
        # Each node is associated with a layer, there is one parameter associated with only one layer. 
        layer = dep_dict["Nodes"][node_pr]
        # If the user did not provide a parameter for the current layer, then the parameter set is incomplete
        if layer not in parameters:
            return False
        param = parameters[layer] # If the layer is not in the 'parameters' dict, then this will throw an error
        # Get the type of parameter for the current layer, either an integer or a enum
        node_type = dep_dict[layer]["Type"]
        
        if(node_type == "Integer"):
            # If the layer type is an integer then the given parameter must be between the bounds set by the dependency structure
            if param < node["Bounds"][0] or param > node["Bounds"][1] :
                # The param is out of bounds, so return false
                data["messages"]["errors"].append("{} is out of bounds {}".format(param, node["Bounds"]))
                return False
            else:
                # The param is in bounds, so move the node_pr to the child of the current node
                node_pr = node['Children']
        else:
            # If the layer type is an enum then the given parameter within the set of options
            if (param not in node["Options"]):
                data["messages"]["errors"].append("'{}' cannot be found".format(param))
                return False
            else:
                 # The param an option, so move the node_pr to the child of the current node
                node_pr = node['Children'][param]
    return True

class ParameterConstructor():
    """
    ParameterConstructor is an object that will guide the user along to help them construct a parameter set that is valid
    """
    def __init__(self, params={}):
        """
        Constructor for PC object

        Args:
            params_str: If you would like to provide some parameters that you have prechosen to save time, pass the parameters as a string json
        """
        self.params = {}
        self.pre_chosen = {}
        self.user_path = []
        self.full_path = []
        self.dep_dict = parameter_dict
        self.node = self.dep_dict["root"]

        # If the user provided prechosen params, load them and input them into the structure
        self.pre_chosen = params
        if len(self.pre_chosen) > 0:
            key = self.dep_dict["Nodes"][self.node]
            if key in self.pre_chosen:
                self.input(self.pre_chosen[key])
    
    def restart(self):
        """
        If the user wants to restart the construction process, then reset the sets and node pointer to the root of the structure
        """
        self.params = {}
        self.user_path = []
        self.full_path = []
        self.node = self.dep_dict["root"]

    def toJson(self):
        """
        Return the params as a formatted json string

        Returns:
            json_p: json string representation of the parameters
        """
        json_p = json.dumps(self.params, indent='   ', separators=(',\n', ' : '))
        return json_p
    
    def toDict(self):
        return copy.deepcopy(self.params)

    def getPath(self):
        return copy.deepcopy(self.user_path)
    
    def toString(self):
        """
        Return a string representation of the entire PC object

        Returns:
            json_p: json string representation of the PC object
        """
        json_v = self.toJson()
        return "{}".format(json_v)

    def peek(self, response):
        """
        If the user were to provide a particular input, return a json string for what resulting parameter object would look like

        Args:
            response: a response to the current ticket
        Returns:
            json_p: json string representation of the parameters
        """
        try: 
            response = int(response)
        except ValueError:
            None
        # Make a copy of the parameters
        param_copy = self.params.copy()
        # Get the current layer
        layer = self.dep_dict["Nodes"][self.node]
        # If the response is an enum, and it is a valid response
        if type(response) is str and self.dep_dict[layer]["Type"] == "Enum":
            if response in self.dep_dict[self.node]["Options"]:
                # Add the response to the copy of the parameters object
                param_copy[layer] = response
        # If the response is an integer, and it is a valid response
        if type(response) is int and self.dep_dict[layer]["Type"] == "Integer":
            if response >= self.dep_dict[self.node]["Bounds"][0] and response <= self.dep_dict[self.node]["Bounds"][1]:
                # Add the response to the copy of the parameters object
                param_copy[layer] = response
        # Format the json string from the parameter object
        return json.dumps(param_copy, indent='  ', separators=(',\n', ' : '))
    
    def ticket(self):
        """
        Based on the current node that the user is on, return an object descibing the constraints of the response that the PC is looking for 

        Returns:
            json_obj: A json object containing the attributes of the response that the PC is looking for
        """
        if self.node == None:
            return None
        layer = self.dep_dict["Nodes"][self.node]
        # Basic information about the ticket that the user is on
        json_obj = {
            "Layer":        layer,
            "Depth":        self.dep_dict[layer]["Depth"],
            "Path":         self.user_path,
            "Node":         self.node,
            "Type":         self.dep_dict[layer]["Type"],
        }
        # If the current ticket is an enum, then append the options that the user has
        if json_obj["Type"] == "Enum":
            json_obj["Options"] = self.dep_dict[self.node]["Options"]
        # If the current ticket is an integer, then append the bounds of the integer
        if json_obj["Type"] == "Integer":
            json_obj["Bounds"] = self.dep_dict[self.node]["Bounds"]
        return json_obj

    def back(self):
        """
        If the user wanted to go back a step, then this function moves the current pointer to its parent
        Since the PC will automatically skip a node if there is only one option, we also want to skip those nodes when stepping back. Additionally, even if a node is skipped it is still added to the parameter object. We want to remove the skipped parameters from the object when stepping back to avoid any dependency conflicts. So we track two paths: the full path which tracks every parameter added, and the user path which tracks the choices that the user makes. An asymmetic number of elements are deleted from the paths because the full path will have more entries than the user path.  

        """
        size = len(self.user_path)
        if(size > 0):
            # If moving back returns to the root node, then restart anyway
            if (size == 1):
                self.restart()
                return
            # Move the node pointer to the node at the end of the user path
            self.node = self.user_path[len(self.user_path) - 1]
            # Remove the last node from the user path 
            self.user_path.pop()
            
            # Use a temp node to track which node the full path has to be reduced to to keep the paths synched
            node = self.user_path[len(self.user_path) - 1]
            # Until the temp node is reached in the full path
            while(self.full_path[len(self.full_path) - 1] != node): 
                # Get the last node in the full path and its layer
                tmp_node = self.full_path[len(self.full_path) - 1]
                layer = self.dep_dict["Nodes"][tmp_node]
                # Delete the nodes parameter from the object
                del self.params[layer]
                # Delete the last element in the full path
                self.full_path.pop()
    
    def goto(self, loc):
        size = len(self.user_path)
        if(size > 0):
            step = None
            nodes = self.dep_dict["Nodes"]
            if loc not in self.user_path:
                for node in nodes.keys():
                    value = nodes[node]
                    if loc == value and node in self.user_path:
                        step = node
            else:
                step = loc
            if step == None:
                return
            # Move the node pointer to the node at the end of the user path
            while len(self.user_path) > 1 and self.user_path[len(self.user_path) - 1] != step:
                self.user_path.pop()
            self.node = self.user_path[len(self.user_path) - 1]
            self.user_path.pop()
            
            # Until the temp node is reached in the full path
            while(self.full_path[len(self.full_path) - 1] != self.node):
                # Get the last node in the full path and its layer
                tmp_node = self.full_path[len(self.full_path) - 1]
                layer = self.dep_dict["Nodes"][tmp_node]
                # Delete the nodes parameter from the object
                del self.params[layer]
                # Delete the last element in the full path
                self.full_path.pop()
                
            tmp_node = self.full_path[len(self.full_path) - 1]
            layer = self.dep_dict["Nodes"][tmp_node]
            del self.params[layer]
            self.full_path.pop()


    def input(self, response):
        node = self.node
        if self.node not in self.user_path:
            self.user_path.append(node)
        if ( not self.inputRec(response)):
            self.user_path.pop()
            

    # TODO add an option to have the user give the index of the choice, instead of having to type out the choice that they make
    def inputRec(self, response):
        """
        Checks the response given to see if it is valid. If the next ticket only has one option, then automatically choose for the user. If there is a prechosen parameter, the input.

        Args:
            response: the response for the current ticket

        Returns:
            1 : if the given response is valid
            0 : if the given response is invalid
        """
        # If the response is an integer, then convert to int
        try: 
            response = int(response)
        except ValueError:
            None
        
        # Save the current node 
        node = self.node
        layer = self.dep_dict["Nodes"][self.node]
        # If the response is a string and the type is an enum
        if type(response) is str and self.dep_dict[layer]["Type"] == "Enum":
            # If the response is a valid option
            if response in self.dep_dict[self.node]["Options"]:
                    # Save the response in the params
                    self.params[layer] = response
                    # Set the current node to the child of the node
                    self.node = self.dep_dict[self.node]['Children'][response]
                    # Add the saved node to the path
                    if (self.node not in self.full_path):
                        self.full_path.append(node)
                    # If the end of the graph has not been reached yet
                    if self.node is not None:
                        # Get the current layer
                        layer = self.dep_dict["Nodes"][self.node]
                        # If the current node is an enum...
                        if self.dep_dict[layer]["Type"] == "Enum":
                            # and there is only one option to choose
                            if len(self.dep_dict[self.node]["Options"]) == 1:
                                # Recursively input the only choice available
                                self.inputRec(self.dep_dict[self.node]["Options"][0])
                        # Or the parameter has already been prechosen
                        if self.node is not None and layer in self.pre_chosen:
                            # Recusively input the prechosen param
                            value = self.pre_chosen[layer]
                            del self.pre_chosen[layer]
                            self.input(value)
                    return 1
        # Logic is the same as enum 
        if type(response) is int and self.dep_dict[layer]["Type"] == "Integer":
            if response >= self.dep_dict[self.node]["Bounds"][0] and response <= self.dep_dict[self.node]["Bounds"][1]:
                self.params[layer] = response
                self.node = self.dep_dict[self.node]['Children']
                # Add the saved node to the path
                if (self.node not in self.full_path):
                    self.full_path.append(node)
                if self.node is not None and self.dep_dict["Nodes"][self.node] in self.pre_chosen:
                    layer = self.dep_dict["Nodes"][self.node]
                    value = self.pre_chosen[layer]
                    del self.pre_chosen[layer]
                    self.input(value)
                return 1
        return 0