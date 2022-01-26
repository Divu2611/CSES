#***************Coin Piles***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7

for t in range(int(input())):
    
    a,b = map(int,input().split())

    if a==0 and b==0:
        print("YES")
    elif (min(a,b)==0 and max(a,b)!=0) or (a==b and a%3!=0) or max(a,b)/min(a,b) > 2 or (a+b)%3!=0:
        print("NO")
    else:
        print("YES")