import queue
from re import S
import subprocess
import threading
import time
import urllib
import urllib.request

# (https://eli.thegreenplace.net/2017/interacting-with-a-long-running-child-process-in-python/)
# OPTION 1 - very risky because it can easily cause deadlocks... very annoying
# s = subprocess.Popen(["python", "../cli/main.py"], stdout=subprocess.PIPE, stderr = subprocess.PIPE, stdin=subprocess.PIPE, text=True)

# s.stdin.write("h")
# s.stdin.flush()
# print(s.stdout.readline())

# (https://eli.thegreenplace.net/2017/interacting-with-a-long-running-child-process-in-python/)
# OPTION 2 - 
# def output_reader(proc, outq):
#     for line in iter(proc.stdout.readline, b''):
#         # print('got line: {0}'.format(line.decode('utf-8')), end='')
#         outq.put(line.decode('utf-8'))


# proc = subprocess.Popen(["python", "../cli/main.py"],
#                             stdin=subprocess.PIPE,
#                             stdout=subprocess.PIPE,
#                             stderr=subprocess.STDOUT)

# q = queue.Queue()
# t = threading.Thread(target=output_reader, args=(proc, q))
# t.start()

# proc.stdin.write(b"h\n")
# proc.stdin.flush()
# # time.sleep(5)
# try:
#     while True:
#         try:
#             line = q.get(block=False)
#             print('got line from q: {0}'.format(line), end='')
#         except queue.Empty:
#             pass
#             # print('could not get line from queue')
# finally:
#     proc.terminate()
#     try:
#         proc.wait(timeout=0.2)
#         print('== subprocess exited with rc =', proc.returncode)
#     except subprocess.TimeoutExpired:
#         print('subprocess did not terminate in time')

# t.join()

# https://github.com/eliben/code-for-blog/blob/master/2017/python-interact-subprocess/interact-server-with-thread-queue.py


# https://stackoverflow.com/questions/16768290/understanding-popen-communicate
p=subprocess.Popen(["python", "-u", "../cli/main.py"],stdin=subprocess.PIPE,stdout=subprocess.PIPE)

# get output from process "Something to print"
one_line_output = p.stdout.readline()

# write 'a line\n' to the process
p.stdin.write(b'h\n')
p.stdin.flush()

# get output from process "not time to break"
print(p.stdout.readline().decode())

# write "n\n" to that process for if r=='n':
p.stdin.write(b'n\n') 
p.stdin.flush()

# read the last output from the process  "Exiting"
one_line_output = p.stdout.readline()

p.communicate(b"q\n")