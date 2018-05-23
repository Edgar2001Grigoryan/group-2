#!/usr/bin/env python3

class Rectangle(object):
    def __init__(self, a, b):
        self.a = a
        self.b = b
    def __str__(slef):
        return "(" + str(slef.a) + ", " + str(slef.b) + ")"
    def area(self):
        return self.a * self.b
    def perimeter(self):
        return 2 * (self.a + self.b)


a = Rectangle(5,4)
print(a)
print(a.area())
print(a.perimeter())
        
