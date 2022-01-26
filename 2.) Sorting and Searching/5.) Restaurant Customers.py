#***************Restaurant Customers***************#
#author: @Divyesh Chhabra

from math import *
import os
import random
import re
import sys
from itertools import *

m = int(pow(10,9)+7)

arrival = []
departure = []

n = int(input())
for i in range(n):
    arrival_time,departure_time = map(int,input().split())
    
    arrival.append(arrival_time)
    departure.append(departure_time)
    
departure.sort()
arrival.sort()

member = 0
meet = 0
i,j = 0,0

while i<n and j<n:
    if arrival[i] < departure[j]:
        meet += 1
        i += 1
    else:
        meet -= 1
        j += 1
        
    if member < meet:
        member = meet
        
print(member)

