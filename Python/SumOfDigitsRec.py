#!/usr/bin/env python3

summ = [0]

def Rec(number,i=0):
    if len(number) == i:
        return summ[0]
    summ[0] += int(number[i])   
    Rec(number,i+1) 

number = input("Type a number")
Rec(number)
print(summ[0])
