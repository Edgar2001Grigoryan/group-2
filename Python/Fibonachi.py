#!/usr/bin/env python3
x = [0]
i=1
k=1
while k < 50:
    i=i+1
    x.append(k)
    k = x[i-1]+x[i-2]
print(x)
