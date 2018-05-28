#!/usr/bin/env python3

import unittest
def is_prime(n):
    ''' Is prime number, or no'''
    for i in range(2, n):
        if n % i == 0:
            return False
    return True

class MyTest(unittest.TestCase):
    def setUp(self):
        pass
 
    def tearDown(self):
        pass
 
    def test(self):
        self.assertEqual(is_prime(11), True)
if __name__ == "__main__":
    unittest.main()
