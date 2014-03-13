#!/usr/bin/env python
# Matthew Page CSCS1240 Spring 2014
# attempting to build a text based craps game
# written in Python 3.x

import random

# need to get number of players  #older method that i'm abandoning as it seems to be
# overcomplicating the issue

#valid_num_players = False
#while valid_num_players == False:
#	number_of_players = input("How many players?\n")
#	valid_num_players = str.isdigit(number_of_players)
#	if valid_num_players == False:
#		print("Invalid Entry! Please choose a number.\n")
#number_of_players = int(number_of_players)


# this block takes a players name, and continues to take new players names unless a sentinel value
# "none" is entered, above the loop and emty dictionary is initialized, and later populated with
# each players name and their associated default bankroll 1000 dollars.

#players = {}
#name = " "
#while name:
#	name = input("Please enter next player's name:\nIf no more players then enter 'none'\n")
#	if name == "none":
#		name = None
#	else:
#		players[name] = 1000
#print(players)

# experimenting with alternate methods to accomplish this

players = {}
name = ""
while name != "none":
    name = input("Please enter next player's name:\nIf no more players, then ener 'none'\n")
    if name == "none":
        name = "none"
    else:
        players[name] = 1000
print(players)

# opening ASCII craps table file for display
# version 1, opening a file

#tablefile = open("crap_table.txt")
#table = tablefile.read()
#tablefile.close()
#print(table)

# ASCII craps table file for display
# version 2

#with open("crap_table.txt") as tablefile:
#	table = tablefile.read()
#print(table)

# ASCII craps table for display version 3,
# table in source code

table = '''
__  ____________________
| d||DC| 4| 5| 6| 8| 9|10| +---------------+
|Po||__|__|__|__|__|__|__| |any seven   4-1|
|An| ____________________  +===============+
|St||     C O M E        | |hard 4 | hard 6|
|Sp||____________________| |-------+-------|
|La| ____________________  |hard 10| hard 8|
|Is||2  3 4  9  10 11  12| +===============+
|Ns||_______FIELD________| |two    |  three|
|E |_____________________  |-----HORN------|
|      don't pass bar 12 | |eleven | twelve|
\________PASS_LINE______| +===============+
                      |  any    craps |
                      +---------------+
'''

# printing ASCII table function

def print_table():
    print(table)

# starting with implementing dice rolls, ultimately need two random standard dice rolls for craps

# dice rolling function

def dice_roll():
    die1 = random.randint(1, 6)
    die2 = random.randint(1, 6)
    print("\nRolling dice...\n")
    print(die1, die2)
#    dice_total = die1 + die2
#    print("\nTOTAL:")
#    print(dice_total)

# testing function calls loop for print_table and dice_roll based on user input

user_input = 0
while user_input < 3:
    user_input = input("Please choose what to do:\nPress 1 to roll dice\nPress 2 to print craps table\nPress 3 to quit\n")
    user_input = int(user_input)
    if user_input == 2:
        print_table()
    elif user_input == 1:
        dice_roll()
    else:
        user_input = 3
print("Exiting game")


