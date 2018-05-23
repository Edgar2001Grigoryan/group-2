#!/usr/bin/env python3

lis = [(k,j,i) for i in range(1,31) for j in range(1,31) for k in range(1,31) if i**2 == j**2 + k**2 if j > k]
print(lis)
