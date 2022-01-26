#***************Counting Bits***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

def bin(n):
	count=0
	while n>0:
		count += n%2
		n//=2
	return count

n = int(input())
ans = 0
for i in range(1,n+1):
	ans += bin(i)
print(ans)