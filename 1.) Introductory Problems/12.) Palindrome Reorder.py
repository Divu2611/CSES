#***************Palindrome Reorder***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7

string = input()
frequency = {}
middle = ''
odd = 0
flag = 0

for letter in string:
    if letter not in frequency:
        frequency[letter] = 1
    else:
        frequency[letter] += 1

for number in frequency:
    if frequency[number]%2!=0 :
        middle = number
        odd += 1
    
    frequency[number]//=2
    
    if odd>1:
        flag=1
        break
        
if flag==1:
    print("NO SOLUTION")
else:
    firstHalf = ''
    secondHalf = ''
    palindrome = ''
    
    for number in frequency:
        firstHalf += number*frequency[number]
    secondHalf = firstHalf[::-1]
    
    palindrome = firstHalf + middle + secondHalf
    
    print(palindrome)
    
