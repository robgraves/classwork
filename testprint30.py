#!/usr/bin/python2

#testing the print30 commands emulating python 3.X print function in python 2.x

from print30 import print30
print30(1, 2, 3)
print30(1, 2, 3, sep='')            #suppress seperator
print30(1, 2, 3, sep='...')
print30(1, [2], (3,), sep='...')    #various object types

print30(4, 5, 6, sep='', end='')    #suppress newline
print30(7, 8, 9)
print30()                           #add newline (or blank line)

import sys
print30(1, 2, 3, sep='??', end='.\n', file=sys.stderr)  #redirect to a file

