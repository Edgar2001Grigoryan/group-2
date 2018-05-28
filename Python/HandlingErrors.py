#!/usr/bin/env python3

a = [0,7,"name",5,6]
b = [8,7,5,0]
c = []

for i in range(len(a)):
    try:
      c.append(a[i] / b[i])
    except IndexError:
        print("IndexError")
    except ZeroDivisionError:
        print("ZeroDivisionError")  
    except TypeError:
         print("TypeError")
