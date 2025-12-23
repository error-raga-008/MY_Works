#ternary operator
#Identity Operators
#BITWISE Operators
#Assignment Operators
#Logical Operators

#------------------------------------------------------------------------------------------------------------------------#
a=10
b=20

#ternary operator

#value_if_true if condition else value_if_false

x = True if a>b else False
print(x,"\n")

#------------------------------------------------------------------------------------------------------------------------#

#Identity Operators / membership

y = [10,20,30]

print(y[1] is 10)
print(y[1] is not 10)

#------------------------------------------------------------------------------------------------------------------------#

#BITWISE OPERATOR IS ONYL THEORY

# Operator	Description	        Syntax
# &	    Bitwise AND	            x & y
# |	    Bitwise OR	            x | y
# ~	    Bitwise NOT	            ~x
# ^	    Bitwise XOR	            x ^ y
# >>	Bitwise right_shift	    x>>
# <<	Bitwise left_shift	    x<<

#------------------------------------------------------------------------------------------------------------------------#

#Assignment Operators

a += 1
a -= 1
a /= 1
a *= 1
a //= 1
a **= 1
a %= 1

#------------------------------------------------------------------------------------------------------------------------#

#Logical Operators

print((5>2) and (3<4))
print((5>2) or (3<4))
print(not (5>2))