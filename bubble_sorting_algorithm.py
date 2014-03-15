#!/usr/bin/env python
# Matthew Page CSCS1240 Spring 2014
# experimenting with the "bubble sorting algorithm"

array_size = 5
scores_array = []
comparisons = array_size - 1
x = 0
y = 0
temp = 0

def fill_array():
    x = 0
    while (x < array_size):
        userinput = input("Enter a score:\n")
        userinput = int(userinput)
        #for i in range(5):
        scores_array.append(userinput)
        x = x + 1


def sort_array():
    y = 0
    while (y < comparisons):
        x = 0
        while (x < comparisons):
            if (scores_array[x] > scores_array[x + 1]):
                swap(x)
            x = x + 1
        y = y + 1

def swap(x):
    temp = scores_array[x + 1]
    scores_array[x + 1] = scores_array[x]
    scores_array[x] = temp

def display_array():
    x = 0
    while (x < array_size):
        print(scores_array[x])
        x = x + 1

fill_array()

print("\n")

sort_array()

display_array()

