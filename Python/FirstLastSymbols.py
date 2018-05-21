#!/usr/bin/env python3
word = input("Type a word")
word = word[len(word)-1] + word[1:(len(word)-1)] + word[:1]
print(word)
