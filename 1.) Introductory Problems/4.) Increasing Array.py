#***************Increasing Array***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

n=int(input())
ans=0
num = list(map(int,input().split()))
for i in range(1,len(num)):
    if num[i]>num[i-1]:
        continue
    ans+=(num[i-1]-num[i])
    num[i]=num[i-1]
print(ans)