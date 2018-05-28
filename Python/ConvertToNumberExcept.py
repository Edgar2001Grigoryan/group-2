#!/usr/bin/env python3

try:
    x = float(input("Type a number"))
except ValueError:
    print("Could not convert to a number")
