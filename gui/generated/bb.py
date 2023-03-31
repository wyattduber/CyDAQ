import numpy as np
import os
import matplotlib.pyplot as plt
#from matlab.apps import AppBase

class bb_GUI():
    
    # Properties that correspond to app components

        # Searches for a CyDAQ by pinging all available com ports and
    # looking for the CyDAQs ACK response. If no CyDAQ is found, the
    # returned value is empty
        
    def getSerialPort(baudRate = None): 
        ports = serialportlist('available')
        for i in np.arange(1,len(ports)+1).reshape(-1):
            try:
                s = serialport(ports(i),baudRate)
                #                     write(s, "r 15", "uint8");
    #                     write(s, bb_GUI.CMD_STOP, "uint8");
                flush(s,'input')
                write_(s,bb_GUI.CMD_PING,'uint8')
                pause(0.05)
                numBytes = s.NumBytesAvailable
                if (numBytes > 0):
                    response = char(read(s,numBytes,'uint8'))
                    if (contains(response,bb_GUI.STR_ACK)):
                        break
            finally:
                pass
            clear('s')
        
        if (('s' != None) == 0):
            s = []
        
        return s
        
        
    def popArr(arr = None): 
        x = arr(end())
        arr[end()] = []
        return x,arr
        
        # Saves the current plot's data to the Matlab workspace with time
    # as the first column and distance (cm) as the second column
        
    def plotToWorkspace(app = None): 
        # Clock format: [year month day hour minute seconds]
        C = clock
        Cstr = str(C(4)) + 'h' + str(C(5)) + 'm' + str(np.rint(C(6))) + 's'
        name = 'distcm_' + Cstr
        var = np.transpose(np.array([[bb_GUI.t_data],[movmean(app.distCm,app.nMovMean)]]))
        assignin('base',name,var)
        return
        
        # Grabs the UART buffer and updates the plot every 100ms
        
    def updateTimerFcn(app = None,_ = None,__ = None): 
        if (not len(app.uart)==0 ):
            try:
                if (True):
                    if (app.uart.NumBytesAvailable > 0):
                        rawIn = read(app.uart,app.uart.NumBytesAvailable,'uint8')
                        updateDist(app,parseBuffer(app,split(char(rawIn))))
            finally:
                pass
        
        return
        
        # Updates local app.distCm with new data and redraws the plot
        
    def updateDist(app = None,newDist = None): 
        N = np.amin(len(newDist),len(bb_GUI.t_data))
        app.distCm[np.arange[1,N+1]] = newDist(np.arange(1,N+1))
        app.distCm = circshift(app.distCm,- len(newDist))
        app.plotLine.YData = movmean(app.distCm,app.nMovMean)
        if (app.saveWhenFull and (not np.isnan(app.distCm(1)) )):
            # Send the plot data when flag is set and distCm is full
            app.plotToWorkspace()
            app.saveWhenFull = False
        
        return
        
        # Converts raw UART input in to a double array. Accounts for
    # incomplete data transfers
        
    def parseBuffer(app = None,asciiIn = None): 
        # check if all elements of residue are NaN. If not, append
    # parital characters from last call
        if (not len(app.dataResidue)==0 ):
            asciiIn[0] = strcat(app.dataResidue,asciiIn[0])
            app.dataResidue = []
        
        # Check if the last char was whitespace ('\n'), if it is then
    # self is a complete transmission
        if (not len(asciiIn[end()])==0 ):
            # partial transmission received, store characters for next
    # receive
            app.dataResidue = asciiIn[end()]
        
        distCm = str2double(asciiIn(np.arange(1,end() - 1+1)))
        return distCm
        
        
    def updateKp(app = None,kp = None): 
        write_(app.uart,'kp ' + str(kp) + '!','uint8')
        return
        
        
    def updateKd(app = None,kd = None): 
        write_(app.uart,'kd ' + str(kd) + '!','uint8')
        return
        
        
    def updateKi(app = None,ki = None): 
        write_(app.uart,'ki ' + str(ki) + '!','uint8')
        return
        
        
    def updateN(app = None,N = None): 
        write_(app.uart,'n ' + str(N) + '!','uint8')
        return
        
        
    def updateSet(app = None,r = None): 
        write_(app.uart,'r ' + str(r) + '!','uint8')
        return
        
        # Callbacks that handle component events
    # Code that executes after component creation
        
    def startupFcn(app = None): 
        script_filepath = mfilename('fullpath')
        
        script_folderpath = os.path.split(script_filepath)[0],os.path.splitext(os.path.split(script_filepath)[1])[0],os.path.splitext(os.path.split(script_filepath)[1])[1]
        # Add dependency folders to path
        addpath(script_folderpath)
        addpath(np.array([script_folderpath,filesep,'..',filesep,'res']))
        if str(pwd) == str(script_folderpath):
            # Change to ~/Documents/Matlab if we are in the GUI's file location
            cd(userpath)
        
        app.Image.ImageSource = 'cydaq_logo.svg'
        app.dataResidue = np.full([1,6],np.nan)
        app.uart = bb_GUI.getSerialPort(bb_GUI.baudRate)
        app.distCm = np.full([bb_GUI.t_data.shape,bb_GUI.t_data.shape],np.nan)
        app.saveWhenFull = False
        app.plotLine = plt.plot(app.UIAxes,bb_GUI.t_data,app. distCm,'LineWidth',bb_GUI.plotLineWidth)
        app.UIAxes.FontSize = 20
        #             app.UIAxes.FontName = 'Computer Modern';
        app.UIAxes.XLim = np.array([bb_GUI.t_data(1),bb_GUI.t_data(end())])
        app.UIAxes.YLim = np.array([- 15,15])
        app.UIAxes.Title.String = 'Ball Position Vs. Time'
        app.UIAxes.XLabel.String = 'Time (sec)'
        app.UIAxes.YLabel.String = 'Distance (cm)'
        app.nMovMean = 5
        if (not len(app.uart)==0 ):
            write_(app.uart,bb_GUI.CMD_START,'uint8')
        
        app.updateTimer = timer('ExecutionMode','fixedRate','Period',bb_GUI.updateRate,'BusyMode','queue','TimerFcn',app.updateTimerFcn)
        start(app.updateTimer)
        return
        
        # Close request function: UIFigure
        
    def UIFigureCloseRequest(app = None,event = None): 
        try:
            if (True):
                print('Stopping Ballance Beam Mode...\n' % ())
                write_(app.uart,bb_GUI.CMD_STOP,'uint8')
        finally:
            pass
        
        if (True):
            stop(app.updateTimer)
        
        os.delete(app.updateTimer)
        os.delete(app.uart)
        os.delete(app)
        return
        
        # Value changed function: PauseButton
        
    def PauseButtonValueChanged(app = None,event = None): 
        value = app.PauseButton.Value
        if (value == 1):
            write_(app.uart,bb_GUI.CMD_PAUSE,'uint8')
            app.PauseButton.Text = 'Resume'
        else:
            write_(app.uart,bb_GUI.CMD_RESUME,'uint8')
            app.PauseButton.Text = 'Pause'
        
        return
        
        # Button pushed function: SendConstantsButton
        
    def SendConstantsButtonPushed(app = None,event = None): 
        kp = app.KpEditField.Value
        kd = app.KdEditField.Value
        ki = app.KiEditField.Value
        N = app.NEditField.Value
        updateKp(app,kp)
        updateKd(app,kd)
        updateKi(app,ki)
        updateN(app,N)
        return
        
        # Button pushed function: SendSetPointButton
        
    def SendSetPointButtonPushed(app = None,event = None): 
        r = app.SetcmEditField.Value
        updateSet(app,r)
        return
        
        # Button pushed function: SaveStepButton
        
    def SaveStepButtonPushed(app = None,event = None): 
        app.distCm = NaN
        
        app.saveWhenFull = True
        
        app.SendSetPointButtonPushed()
        return
        
        # Button pushed function: SavePlotDataButton
        
    def SavePlotDataButtonPushed(app = None,event = None): 
        app.plotToWorkspace()
        return
        
        # Callback function
        
    def SetcmEditFieldValueChanged(app = None,event = None): 
        return
        
        # Button pushed function: OffsetButton
        
    def OffsetButtonIncPressed(app = None,event = None): 
        cmd_str = bb_GUI.CMD_SERVO_OFFSET + ' ' + str(bb_GUI.servoOffsetDelta) + '!'
        write_(app.uart,cmd_str,'uint8')
        return
        
        # Button pushed function: OffsetButton_2
        
    def OffsetButtonDecPressed(app = None,event = None): 
        cmd_str = bb_GUI.CMD_SERVO_OFFSET + ' ' + str(- bb_GUI.servoOffsetDelta) + '!'
        write_(app.uart,cmd_str,'uint8')
        return
        
        # Changes arrangement of the app based on UIFigure width
        
    def updateAppLayout(app = None,event = None): 
        currentFigureWidth = app.UIFigure.Position(3)
        if (currentFigureWidth <= app.onePanelWidth):
            # Change to a 2x1 grid
            app.GridLayout.RowHeight = np.array([583,583])
            app.GridLayout.ColumnWidth = np.array(['1x'])
            app.RightPanel.Layout.Row = 2
            app.RightPanel.Layout.Column = 1
        else:
            # Change to a 1x2 grid
            app.GridLayout.RowHeight = np.array(['1x'])
            app.GridLayout.ColumnWidth = np.array([214,'1x'])
            app.RightPanel.Layout.Row = 1
            app.RightPanel.Layout.Column = 2
        
        return
        
        # Component initialization
    # Create UIFigure and components
        
    def createComponents(app = None): 
        # Create UIFigure and hide until all components are created
        app.UIFigure = uifigure('Visible','off')
        app.UIFigure.AutoResizeChildren = 'off'
        app.UIFigure.Position = np.array([100,100,1013,583])
        app.UIFigure.Name = 'MATLAB App'
        app.UIFigure.CloseRequestFcn = createCallbackFcn(app,UIFigureCloseRequest,True)
        app.UIFigure.SizeChangedFcn = createCallbackFcn(app,updateAppLayout,True)
        # Create GridLayout
        app.GridLayout = uigridlayout(app.UIFigure)
        app.GridLayout.ColumnWidth = np.array([214,'1x'])
        app.GridLayout.RowHeight = np.array(['1x'])
        app.GridLayout.ColumnSpacing = 0
        app.GridLayout.RowSpacing = 0
        app.GridLayout.Padding = np.array([0,0,0,0])
        app.GridLayout.Scrollable = 'on'
        # Create LeftPanel
        app.LeftPanel = uipanel(app.GridLayout)
        app.LeftPanel.Layout.Row = 1
        app.LeftPanel.Layout.Column = 1
        # Create KpEditField
        app.KpEditField = uieditfield(app.LeftPanel,'numeric')
        app.KpEditField.Limits = np.array([0,3])
        app.KpEditField.Position = np.array([68,400,38,22])
        app.KpEditField.Value = 0.3
        # Create KiEditField
        app.KiEditField = uieditfield(app.LeftPanel,'numeric')
        app.KiEditField.Limits = np.array([0,2])
        app.KiEditField.Position = np.array([68,360,38,22])
        app.KiEditField.Value = 0.3
        # Create KdEditField
        app.KdEditField = uieditfield(app.LeftPanel,'numeric')
        app.KdEditField.Limits = np.array([0,2])
        app.KdEditField.Position = np.array([68,320,38,22])
        app.KdEditField.Value = 0.3
        # Create NEditField
        app.NEditField = uieditfield(app.LeftPanel,'numeric')
        app.NEditField.Limits = np.array([0,Inf])
        app.NEditField.Position = np.array([68,280,38,22])
        app.NEditField.Value = 50
        # Create SendConstantsButton
        app.SendConstantsButton = uibutton(app.LeftPanel,'push')
        app.SendConstantsButton.ButtonPushedFcn = createCallbackFcn(app,SendConstantsButtonPushed,True)
        app.SendConstantsButton.Tooltip = np.array(['Send PID parameters'])
        app.SendConstantsButton.Position = np.array([47,248,125,22])
        app.SendConstantsButton.Text = 'Send Constants'
        # Create SetcmEditField
        app.SetcmEditField = uieditfield(app.LeftPanel,'numeric')
        app.SetcmEditField.Limits = np.array([- 15,15])
        app.SetcmEditField.Position = np.array([67,208,38,22])
        # Create SendSetPointButton
        app.SendSetPointButton = uibutton(app.LeftPanel,'push')
        app.SendSetPointButton.ButtonPushedFcn = createCallbackFcn(app,SendSetPointButtonPushed,True)
        app.SendSetPointButton.Tooltip = np.array(['Send the set point'])
        app.SendSetPointButton.Position = np.array([48,170,124,22])
        app.SendSetPointButton.Text = 'Send Set Point'
        # Create SaveStepButton
        app.SaveStepButton = uibutton(app.LeftPanel,'push')
        app.SaveStepButton.ButtonPushedFcn = createCallbackFcn(app,SaveStepButtonPushed,True)
        app.SaveStepButton.Tooltip = np.array(['Send the set point and send the response to the workspace'])
        app.SaveStepButton.Position = np.array([48,135,124,22])
        app.SaveStepButton.Text = 'Save Step'
        # Create SavePlotDataButton
        app.SavePlotDataButton = uibutton(app.LeftPanel,'push')
        app.SavePlotDataButton.ButtonPushedFcn = createCallbackFcn(app,SavePlotDataButtonPushed,True)
        app.SavePlotDataButton.Tooltip = np.array(['Send the current plot data to the Workspace'])
        app.SavePlotDataButton.Position = np.array([48,100,124,22])
        app.SavePlotDataButton.Text = 'Save Plot Data'
        # Create PauseButton
        app.PauseButton = uibutton(app.LeftPanel,'state')
        app.PauseButton.ValueChangedFcn = createCallbackFcn(app,PauseButtonValueChanged,True)
        app.PauseButton.Text = 'Pause'
        app.PauseButton.Position = np.array([48,18,124,22])
        # Create Image
        app.Image = uiimage(app.LeftPanel)
        app.Image.Position = np.array([7,439,202,125])
        # Create EditField
        app.EditField = uieditfield(app.LeftPanel,'numeric')
        app.EditField.Editable = 'off'
        app.EditField.BackgroundColor = np.array([0.949,0.949,0.949])
        app.EditField.Position = np.array([126,400,27,22])
        # Create EditField_2
        app.EditField_2 = uieditfield(app.LeftPanel,'numeric')
        app.EditField_2.Editable = 'off'
        app.EditField_2.BackgroundColor = np.array([0.949,0.949,0.949])
        app.EditField_2.Position = np.array([125,320,27,22])
        # Create EditField_3
        app.EditField_3 = uieditfield(app.LeftPanel,'numeric')
        app.EditField_3.Editable = 'off'
        app.EditField_3.BackgroundColor = np.array([0.949,0.949,0.949])
        app.EditField_3.Position = np.array([125,360,27,22])
        # Create EditField_4
        app.EditField_4 = uieditfield(app.LeftPanel,'numeric')
        app.EditField_4.Editable = 'off'
        app.EditField_4.BackgroundColor = np.array([0.949,0.949,0.949])
        app.EditField_4.Position = np.array([126,280,27,22])
        # Create KpEditFieldLabel
        app.KpEditFieldLabel = uilabel(app.LeftPanel)
        app.KpEditFieldLabel.Position = np.array([36,400,25,22])
        app.KpEditFieldLabel.Text = 'Kp'
        # Create KdEditFieldLabel
        app.KdEditFieldLabel = uilabel(app.LeftPanel)
        app.KdEditFieldLabel.Position = np.array([35,320,25,22])
        app.KdEditFieldLabel.Text = 'Kd'
        # Create KiEditFieldLabel
        app.KiEditFieldLabel = uilabel(app.LeftPanel)
        app.KiEditFieldLabel.Position = np.array([35,360,25,22])
        app.KiEditFieldLabel.Text = 'Ki'
        # Create NEditFieldLabel
        app.NEditFieldLabel = uilabel(app.LeftPanel)
        app.NEditFieldLabel.Position = np.array([36,280,25,22])
        app.NEditFieldLabel.Text = 'N'
        # Create EditField_5
        app.EditField_5 = uieditfield(app.LeftPanel,'numeric')
        app.EditField_5.Editable = 'off'
        app.EditField_5.BackgroundColor = np.array([0.949,0.949,0.949])
        app.EditField_5.Position = np.array([125,208,27,22])
        # Create SetcmEditFieldLabel
        app.SetcmEditFieldLabel = uilabel(app.LeftPanel)
        app.SetcmEditFieldLabel.Position = np.array([17,208,52,22])
        app.SetcmEditFieldLabel.Text = 'Set (cm)'
        # Create OffsetButton
        app.OffsetButton = uibutton(app.LeftPanel,'push')
        app.OffsetButton.ButtonPushedFcn = createCallbackFcn(app,OffsetButtonIncPressed,True)
        app.OffsetButton.Tooltip = np.array(['Increase the servo\'s 0 possition'])
        app.OffsetButton.Position = np.array([48,53,58,22])
        app.OffsetButton.Text = 'Offset +'
        # Create OffsetButton_2
        app.OffsetButton_2 = uibutton(app.LeftPanel,'push')
        app.OffsetButton_2.ButtonPushedFcn = createCallbackFcn(app,OffsetButtonDecPressed,True)
        app.OffsetButton_2.Tooltip = np.array(['Decrease the servo\'s 0 possition'])
        app.OffsetButton_2.Position = np.array([114,53,58,22])
        app.OffsetButton_2.Text = 'Offset -'
        # Create RightPanel
        app.RightPanel = uipanel(app.GridLayout)
        app.RightPanel.Layout.Row = 1
        app.RightPanel.Layout.Column = 2
        # Create UIAxes
        app.UIAxes = uiaxes(app.RightPanel)
        plt.title(app.UIAxes,'Title')
        plt.xlabel(app.UIAxes,'X')
        plt.ylabel(app.UIAxes,'Y')
        app.UIAxes.MinorGridLineStyle = '-'
        app.UIAxes.XTickLabelRotation = 0
        app.UIAxes.YTickLabelRotation = 0
        app.UIAxes.ZTickLabelRotation = 0
        app.UIAxes.XGrid = 'on'
        app.UIAxes.YGrid = 'on'
        app.UIAxes.YMinorGrid = 'on'
        app.UIAxes.MinorGridColor = np.array([0.149,0.149,0.149])
        app.UIAxes.GridAlpha = 0.2
        app.UIAxes.MinorGridAlpha = 0.08
        app.UIAxes.Position = np.array([21,18,759,546])
        # Show the figure after all components are created
        app.UIFigure.Visible = 'on'
        return
        
        # App creation and deletion
    # Construct app
        
    def __init__(app = None): 
        app.onePanelWidth = 576
        app.baudRate = 921600
        
        app.dt = 0.01
        
        app.updateRate = 0.1
        
        app.t_data = np.arange(- 10,0+bb_GUI.dt,bb_GUI.dt)
        app.plotLineWidth = 2
        app.servoOffsetDelta = 1.0
        app.STR_ACK = '@ACK!'
        app.CMD_START = '@' + char(16) + '!'
        app.CMD_PAUSE = 'pause on!'
        app.CMD_RESUME = 'pause off!'
        app.CMD_STOP = 'q!'
        app.CMD_PING = '@' + char(7) + '!'
        app.CMD_SERVO_OFFSET = 'SOI'
        # Create UIFigure and components
        createComponents(app)
        # Register the app with App Designer
        registerApp(app,app.UIFigure)
        # Execute the startup function
        runStartupFcn(app,startupFcn)
        if nargout == 0:
            clear('app')
        
        return
        
        # Code that executes before app deletion
        
    def delete(app = None): 
        # Delete UIFigure when app is deleted
        os.delete(app.UIFigure)
        return
        
if __name__ == "__main__":
    app = bb_GUI()
    app.startupFcn