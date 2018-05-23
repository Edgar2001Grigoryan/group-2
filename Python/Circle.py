#!/usr/bin/env python3

class Circle(object):
    def __init__(self, r):
        self.r = r
    def __str__(self):
        return str(self.r)
    def area(self):
        return 3.14 * self.r ** 2
    def perimeter(self):
        return 3.14 * 2 * self.r


a = Circle(10)
print(a)
print(a.area())
print(a.perimeter())
