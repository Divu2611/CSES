#***************Stick Lengths***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7

n = int(input())
p = list(map(int,input().split()))
cost = 0

p.sort()

max = p[n//2]

for i in p:
	cost += abs(i - max)

print(cost)