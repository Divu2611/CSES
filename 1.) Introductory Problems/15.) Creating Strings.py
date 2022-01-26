#***************Creating Strings***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7

s = input()

list = sorted((set(list(permutations(s)))))

print(len(list))

for i in list:
    for x in i:
        print(x,end="")
    print()
