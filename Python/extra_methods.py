print(chr(65)) #print the char at the ascii value of 65

if 1 > 1:
    pass 
#pass statement in Python is a null operation used as a placeholder where a statement is syntactically required


#zip is used to combine multiple lists 
a = [1,2]
b = [3,4]

for x,y in zip(a,b):
    print(x," : ",y)


#enumerate is used to print list with its indexs
for x,y in enumerate(a,start=1):
    print(x,y)

#isinstance is used to compare the data and datatype and return boolean depending if both are same or not and its from numbers libary
import numbers
print(isinstance(1,int))
print(isinstance("1",int))

#sysversion is used to get what it say and its from sys libary
import sys
print(sys.version)

#current datetime is used to get what it say and its from datetime
import datetime
print(datetime.datetime.now)