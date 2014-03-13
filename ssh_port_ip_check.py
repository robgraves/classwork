#!/usr/bin/env python
# Matthew Page CSCS1240 Spring 2014
# attempting to work through the recurring problem I have on my one desktop
# to create a programming solution that has a script that checks local IP address
# of the machine and compares it with router settings for ssh port forward for
# given local IP address, and if local IP address has changed,, change it in router settings
# so as to always keep the correct local IP address of the machine and the local IP address
# forwarding the port of the ssh daemon the same.  That's the goal anyway, not sure if I'm
# capable of accomplishign this yet.

# First I need to utilize a few linux command line utilities from a bash prompt and store that output

import subprocess

#stderr = ""
#stdout = ""

#def print_std():
#    print(stderr)
#    print(stdout)

# experimenting with runnign a command via python, then capturing the output of the command
def commandInNOut():
    command = "ls -lh"

    proc = subprocess.Popen(command.split(), stdout=subprocess.PIPE, stderr=subprocess.PIPE)

    stdout, stderr = proc.communicate()

    if stdout:
        print('output as string is: {}'.format(stdout.decode()))
    if stderr:
        print('error as string is: {}'.format(stdout.decode()))

    #print_std()
    #print(stderr)
    #print(stdout)

#same as above but more specifically tryign to capture info from google website
def google_dump1():
    google_command1 = "wget -O tempfile1 http://www.google.com"
    proc = subprocess.Popen(google_command1.split(), stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = proc.communicate()

    #print_std()
    #print(stderr)
    #print(stdout)

    google_command2 = "cat tempfile1"
    proc = subprocess.Popen(google_command2.split(), stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = proc.communicate()

    #print_std()
    print(stderr)
    print(stdout)

def google_dump2():
    google_command3 = "lynx --dump http://www.google.com"
    proc = subprocess.Popen(google_command3.split(), stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    stdout, stderr = proc.communicate()

    #print_std()
    print(stderr)
    print(stdout)

#commandInNOut()

#google_dump1()

google_dump2()
