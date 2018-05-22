#!/usr/bin/env python3

def SumRec(lis):
    if len(lis) < 1:
        return 0
    if type(lis[-1]) == type([]):
        ls = lis[-1]
        lis = lis[:-1]
        for i in ls:
            lis.append(i)
    return lis[-1] + SumRec(lis[:len(lis)-1])

lis = [42, [-1, -2], 2, [4, [1, 2] ,3], 25, -2]
print(SumRec(lis))
