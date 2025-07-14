#creating a list

# List is a collection of items in a particular order. You can make a list that includes the letters of the alphabet,
# the digits from 0 to 9, or the characters.

# In python, square brackets([]) indicate a list, and individual elements in the list are separated by commas.

fruits = ["apple","banana","orange"]
print("printing the list using print function")
print(fruits) #printing the list

#Getting a list from the user

n = int(input("Enter the number of elements: "))  # Ask for the number of elements
lst = []  # Initialize an empty list

for i in range(n):
    element = input(f"Enter element {i+1}: ")  # Take input
    lst.append(element)  # Add to list

print("List:", lst)  # Print the final list


# Accessing the elements of the list using index

print("\nprinting the list using index")
print(fruits[0]) #printing the first element of the list
print(fruits[1]) #printing the second element of the list
print(fruits[2]) #printing the third element of the list

# Accessing the last element of the list using negative index

print("\nprinting the list using -ve index")
print(fruits[-1]) #printing the last element of the list
print(fruits[-2]) #printing the second last element of the list
print(fruits[-3]) #printing the third last element of the list

# Modifying the elements of the list. List in python are mutable, which means you can change the elements of the list.
# To modify the elements of the list, write the name of the list followed by the index of the item enclosed in square brackets.

print("\nediting the elements of the list using index and modifying the elements of the list")
fruits[0] = "mango" #modifying the first element of the list
print(fruits[0]) #printing the first element of the list
print(fruits[1])
print(fruits[2])

# More about list
#printting list using for loop

cart = ["abc","def","ghi"]
print("\nprinting the list using for loop")
for i in cart:
    print(f"item in the cart is {i}")


# Adding elements to the list
# To add elements to the list, use the append () method. The append() method adds the element to the end of the list.

print("\nadding elements to the list using append() method")
cart.append("jkl")
print(cart)

# To remove elements from the list, use the remove() method.

print("\nremoving elements from the list using remove() method")
cart.remove("abc")
print(cart)

# To insert elements at a specific position in the list, use the insert() method.

print("\ninserting elements at a specific position in the list using insert() method")
cart.insert(1,"abc")
print(cart)

#Slicing

#Syntax: list_name[start:stop:step]
#start: The index of the first element you want to include in the slice.
#stop: The index of the last element you want to include in the slice.
#step: The number of elements to skip in the list.

print("\nslicing the list")

field = [1,2,3,4,5,6,7,8,9,10]

print(field[0:9:2]) #printing the elements of the list from index 0 to 2 with step 2

print(field[0:9]) #printing the elements of the list from index 0 to 9

print(field[:9]) #printing the elements of the list from index 0 to 9 also called outing start

print(field[2:]) #printing the elements of the list from index 2 to the end of the list also called outing end

print(field[:]) #printing the whole list

print(field[::-1]) #printing the list in reverse order

#pop method

#The pop() method removes the last element from the list and returns the element that was removed.
field.pop() #removing the last element of the list
print(field)

#The pop() method can also remove an element from a specific position in the list by passing the index of the element you want to remove.
field.pop(2) #removing the element at index 2
print(field)


