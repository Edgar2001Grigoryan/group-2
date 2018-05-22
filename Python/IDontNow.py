#!/usr/bin/env python3

def Rec(n):
    if n <= 0:
        return 0
    return n + Rec(n-2)     


n = input("Type a number: ")
print(Rec(int(n)))
