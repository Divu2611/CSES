#***************Maximum Subarray Sum***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = pow(10,9)+7

n = int(input())
x = list(map(int,input().split()))
max = 0
sum = 0

for i in x:
	sum += i
	if sum < 0:
		sum = 0
	elif sum > max:
		max = sum

if max == 0:
	x.sort()
	max = x[len(x)-1]

print(max)