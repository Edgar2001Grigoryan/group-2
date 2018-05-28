#!/usr/bin/env python3

a = input("Type a number")
if float(a) % 1 != 0:
    raise ValueError("The number must be an integer")
elif int(a) % 3 != 0:
    raise TypeError("Number must be divisible by 3")
else:
    print("Perfect")
