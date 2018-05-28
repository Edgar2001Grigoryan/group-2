#!/usr/bin/env python3

a = float(input("Type a number"))
b = float(input("Type a number second time"))

try:
    a / b
except ZeroDivisionError:
    print("Can't divide by zero")
