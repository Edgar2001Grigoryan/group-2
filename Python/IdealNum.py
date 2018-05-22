#!/usr/bin/env python3
number = input("Type a number: ")
summa = 0
for i in range(1,int(int(number)/2) + 1):
    if int(number)%i==0:
        summa += i
if summa == int(number):
    print("The number is perfect!")
else:
    print("The number is not perfect!")

