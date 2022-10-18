from queue import Queue
from re import S
import subprocess
import threading

# (https://eli.thegreenplace.net/2017/interacting-with-a-long-running-child-process-in-python/)
# OPTION 1 - very risky because it can easily cause deadlocks... very annoying
# s = subprocess.Popen(["python", "../cli/main.py"], stdout=subprocess.PIPE, stderr = subprocess.PIPE, stdin=subprocess.PIPE, text=True)

# s.stdin.write("h")
# s.stdin.flush()
# print(s.stdout.readline())

# (https://eli.thegreenplace.net/2017/interacting-with-a-long-running-child-process-in-python/)
# OPTION 2 - 
def output_reader(proc):
    for line in iter(proc.stdout.readline, b''):
        print('got line: {0}'.format(line.decode('utf-8')), end='')


proc = subprocess.Popen(["python", "../cli/main.py"],
                            stdout=subprocess.PIPE,
                            stderr=subprocess.STDOUT)

q = Queue()

t = threading.Thread(target=output_reader, args=(proc,))
t.start()

proc.terminate()
try:
    proc.wait(timeout=0.2)
    print('== subprocess exited with rc =', proc.returncode)
except subprocess.TimeoutExpired:
    print('subprocess did not terminate in time')

t.join()

# https://github.com/eliben/code-for-blog/blob/master/2017/python-interact-subprocess/interact-server-with-thread-queue.py
