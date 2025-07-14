a = 3

if a > 10:
    print(f"The discount is {a * 1}%") #The `f` enables you to insert values, variables, or even
                                       # expressions into a string, wrapped in curly braces `{}`.
elif a>5:
    print(f"The discount is {a*5}%")
else:
    print(f"The discount is {a*0.5}%")

print("---------------")
print("---------------")


#loops

#for loop

#aligment is important in python

numbers = [1,2,3,4,5]

for num in numbers: #num is a variable that will store the value of the list
    print(num)

print("---------------")

for i in range(3,10): #range of this will be 3 to 9 as 10 is exclusive
    print(i)

print("---------------")

for i in range(3,10,2): #range of this will be 3 to 9 as 10 is exclusive and 2 is the step
    print(i)

print("---------------")

for i in range(10,3,-1): #range of this will be 10 to 4 as 3 is exclusive and -1 is the step
    print(i)

print("---------------")

#printing the table of 2

for i in range(1,11):
    print(f"2 x {i} = {2*i}")

print("---------------")

#printing a array using for loop

pros = ["Laptop","Camera","Mobile","Printer"]
for pro in pros:
    print(pro)

print("---------------")
print("---------------")

#while loop

i = 1

while i<6:
    print(i)    #i++ does not work in python
    i += 1     #incrementing the value of i by 1

print("---------------")

password = ""

while len(password) < 4:
    password = input("Enter a password of length 4: ") #input function is used to take input from the user
    #input function take the input as datatype as string and if we want to take any other then
    #we have to use data_type(input())
    if len(password) < 4:
        print("Password is too short")
    else:
        print("Password is set")
        break

print("---------------")

#Python does not have switch case
#Instead it has match case

choice = 2

match choice:
    case 1:
        print("Option 1 selected")
    case 2:
        print("Option 2 selected")
    case 3:
        print("Option 3 selected")
    case _:
        print("Invalid option")  # Default case

print("---------------")

#Logical Operations

# Operator	Description	Example
# and	Logical AND: True if both operands are true
# or	Logical OR: True if at least one operand is true
# not	Logical NOT: Negates the Boolean value