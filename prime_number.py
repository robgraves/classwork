#!/usr/bin/env python
#test whether a number is prime

y = int(input("Enter a number: "))
x = y // 2
while x > 1:
    if y % 2 == 0:
        print(y, 'has factor', x)
        break
    x-=1
else:
    print(y, 'is prime')
