#!/usr/bin/env python

print("Convert Celsius to Fahrenheit or Convert Fahrenheit to Celsius")
choice = input("Press 1 to Convert Celsius to Fahrenheit, Press 2 to Convert Fahrenheit to Celsius.\n")

if choice == '1':

	celsius = float(input("Convert Celsius to Fahrenheit.\nEnter temperature in Celsius:\n"))

	fahrenheit = ((celsius * 9)/5) + 32

	print("The temperature in Fahrenheit is: ")
	print(fahrenheit)

else:

	fahrenheit = float(input("Convert Fahrenheit to Celsius.\nEnter temperature in Fahrenheit:\n"))

	celsius = ((fahrenheit -32) * 5) / 9

	print("The temperature in Celsius is: ")
	print(celsius)
	
