#!/usr/bin/env python3
word = input("Type a word")
result=True
if len(word)%2!=0:
    k=(len(word)-1)/2
else:
    k=(len(word))/2
for i in range(0,int(k)):
    if word[i]!=word[-(i+1)]:
        result=False
print(result)
