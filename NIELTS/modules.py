#Importing an entire module

import math
print(math.sqrt(25))

#Only Importing a single function

from math import sqrt
print(sqrt(25))

#Importing with an alias

import math as mt
print(mt.sqrt(25))

#Import everything and use it directly

from math import *
print(sqrt(25))