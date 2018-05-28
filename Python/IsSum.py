#!/usr/bin/env python3
import unittest

def IsSum(a, b):
    '''The function gets two arguments and
       return the sum of arguments'''
    return a + b

class TestClass(unittest.TestCase):
    def setUp(self):
        pass
 
    def tearDown(self):
        pass
 
    def test_Func(self):
        self.assertEqual(IsSum(4,5),9)

if __name__ == "__main__":
    unittest.main()

