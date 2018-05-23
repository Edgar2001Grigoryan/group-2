#!/usr/bin/env python3

def SumRec(lis):
    summa = 0
    for i in lis:
        if type(i) == type([]):
            summa += SumRec(i)
        else:
            summa += i
    return summa

lis = [42, [-1, -2,[12,52]], 2, [4, [1, 2] ,3], 25, -2]
print(lis)
print(SumRec(lis))
