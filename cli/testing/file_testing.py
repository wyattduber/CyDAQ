import re
import os
import shutil

filename = "C:\\Users\\Wyatt Duberstein\\PycharmProjects\\sdmay23-47\\gui\\test2_1.csv"
temp_filename = "C:\\Users\\Wyatt Duberstein\\PycharmProjects\\sdmay23-47\\gui\\test1.csv"

try:
    if os.path.exists(filename):
        open(filename, 'w')
except PermissionError:
    if re.search('_[0-9]+\.csv', filename):
        while os.path.exists(filename):
            x = re.search('_[0-9]+\.csv', filename)
            print(f"Curr: {x}")
            prev_num = x[1]
            filename = re.sub('_[0-9]+\.csv', f'_{prev_num + 1}.csv')
    else:
        filename = filename.replace('.csv', '_1.csv')

# Copy the temp file over to the new one
shutil.copyfile(temp_filename, filename)