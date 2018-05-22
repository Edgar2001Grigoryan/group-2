#!/usr/bin/env python3
def Rec(string,i=0):
    if i == int(len(string)):
        print("Word is palindrom")
    elif string[i] == string[-(i+1)]:
        Rec(string,i+1)
    else:
        print("Word isn't palindrom")

string = input("Type a word")
Rec(string)
