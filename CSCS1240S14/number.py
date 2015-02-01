#!/usr/bin/env python
#Matthew Page CSCS1240 Spring 2014 MW morning class
#testing numbers for integer or floating point data types like what
#the class was doing morning of 3/3/2014

userinput = input("Input a number.\n")

while userinput.isalpha():
    userinput = input("Input a number.\n")

userinput = float(userinput)

remainder = userinput % 1.0

if remainder == 0:
    userinput = int(userinput)
else:
    userinput = float(userinput)

print(userinput)

print(type(userinput))
