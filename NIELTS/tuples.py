#Tuples

# Tuples are similar to lists, but the elements of a tuple cannot be changed once it is defined.
# A tuple is a collection which is ordered and unchangeable. In Python tuples are written with round brackets.
# You can access the elements of the tuple using the index of the element enclosed in square brackets. Its similar as list.

#create a tuple
fruits = ("apple","banana","orange","mango","grapes","apple")
print("printing the tuple using print function")
print(fruits) #printing the tuple

#Tuples can have more than one data type elements
mixtuple = (1,"rishi",2.5)
print(mixtuple)

# Single element tuple
singletuple = ("apple",) #comma is necessary to make it a tuple
print(singletuple)

# Tuple without parameters
nopara = 1,2,3,4
print(nopara)

#Accessing Tuple Elements

# 1.Accessing the elements of the tuple using index
print("\nprinting the tuple using index")
print(fruits[0]) #printing the first element of the tuple
print(fruits[1]) #printing the second element of the tuple
print(fruits[2]) #printing the third

# 2.Accessing the last element of the tuple using negative index
print("\nprinting the tuple using -ve index")
print(fruits[-1]) #printing the last element of the tuple
print(fruits[-2]) #printing the second last element of the tuple
print(fruits[-3]) #printing the third last element of the tuple

# 3.Accessing the elements of the tuple using range of index
print("\nprinting the tuple using range of index")
print(fruits[0:2]) #printing the first and second element of the tuple
print(fruits[1:3]) #printing the second and third element of the tuple
print(fruits[:2]) #printing the first and second element of the tuple

# 4.Accessing the elements of the tuple using negative range of index
print("\nprinting the tuple using negative range of index")
print(fruits[-3:-1]) #printing the first and second element of the tuple
print(fruits[-2:]) #printing the second and third element of the tuple

# Slicing of tuple
print("\nprinting the tuple using slicing")
print(fruits[0:5:2]) #printing the first element to the fifth element of the tuple with step 2 means it will print the first, third and fifth element of the tuple

# Methods for accessing the elements of the tuple

# 1.count() method
print("\nprinting the count of the element in the tuple")
print(fruits.count("apple")) #prints the count of the specified element in the tuple

# 2.index() method
print("\nprinting the index of the element in the tuple")
print(fruits.index("apple")) #prints the index of the specified element in the tuple and this will only print the index at which the element is first found

# Packing and Unpacking of tuple

# Packing
print("\nPacking of tuple") #packing is the process of putting multiple values into a tuple at the same time
packtuple = 1,2,3,4 #packing the values in the tuple
print(packtuple)

# Unpacking
print("\nUnpacking of tuple") #unpacking is the process of assigning the values of tuple to the multiple variables
a,b,c,d = packtuple #unpacking the values from the tuple
print(a)
print(b)
print(c)
print(d)





