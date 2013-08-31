#!/usr/bin/python


# Comments:
# My original basic "solution" did not use a dictionary to keep track of seen
# characters, hence had a major flaw. A string like "oos" would return i = 1
# instead of i = 2, since it would only look in the remaining string to find
# duplicates, but not look at the already seen characters.

def BasicSolution(mystring):
    SeenCharacters = {}
    stringLength = len(mystring)
    i = 0
    while (i < stringLength):
        myChar = mystring[i]
        restString = mystring[i + 1:]
        if ((restString.find(myChar) == -1) and (not (myChar in SeenCharacters.keys()))):
                return i
        else:
                SeenCharacters[myChar] = 1
        i = i + 1
