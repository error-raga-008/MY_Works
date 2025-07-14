#SET IN PYTHON

#A set is a collection which is unordered and unindexed. In Python sets are written with curly brackets.
#You cannot access the elements of a set using an index because sets are unordered.

#Creating a set
fruits = {"apple","banana","orange","mango","grapes","apple"}
print("printing the set using print function")
print(fruits) #printing the set

#Diffence between set and list
#1. Set does not allow duplicate elements
#2. Set is unordered
#3. Set does not support indexing

a_list = ["apple","banana","orange","mango","grapes","apple"]
a_set = {"apple","banana","orange","mango","grapes","apple"}

print("\nprinting the list")
print(a_list)
print("\nprinting the set")
print(a_set)

#The output of a set is random and unordered


#Creating a empty set

empty_set = set()

#Accessing the elements of the set using for loop

print("\nprinting the set using for loop")
for i in fruits:
    print(i)


#Checking Item in a Set

print("\nTo check if an item is present in the set, use the in keyword")
print("\napple" in fruits)
#The output will be True if the item is present in the set, otherwise False.

#getting the input from the user and checking if the item is present in the set

item = input("Enter the item to check in the set: ")
print(item in fruits)

#Adding elements to the set

#To add one item to a set, use the add() method.
print("\nadding elements to the set using add() method")
fruits.add("kiwi")
print(fruits)

#Removing elements from the set

#To remove an item from the set, use the remove() method.
print("\nremoving elements from the set using remove() method")
fruits.remove("apple")
print(fruits)

#Metohds in set

#1. Pop() method
#The pop() method removes a random item from the set.
print("\nremoving elements from the set using pop() method")
fruits.pop()
print(fruits)

#2. Discard() method
#The discard() method removes the specified item from the set.
print("\nremoving elements from the set using discard() method")
fruits.discard("banana")
print(fruits)

#3. Remove() method
#The remove() method removes the specified item from the set.
print("\nremoving elements from the set using remove() method")
fruits.remove("orange")
print(fruits)

#4. Clear() method
#The clear() method empties the set.
print("\nremoving elements from the set using clear() method")
fruits.clear()
print(fruits)

#del keyword
#The del keyword will delete the set completely.
print("\nremoving elements from the set using del keyword")
del fruits
# print(fruits) #this will raise an error because the set is deleted


#Operations in set

set1 = {1,2,3,4,5}
set2 = {4,5,6,7,8}
set3 = {8,9,10,11,4}
set4 = {1,2,3,4,5,6,7,8}

#1. Union

#The union() method returns a new set with all items from both sets.
#We can also join tuples, lists, or dictionaries using the union() method.
#and we can join a tuple and set using the union() method.
print("\nUnion of two sets")
print(set1.union(set2))

#or

print(set1 | set2)

#Union of more than two sets
print("\nUnion of more than two sets")
print(set1.union(set2,set3))

#or

print(set1 | set2 | set3)

#2. Intersection

#The intersection() method returns a new set with items that are common in both sets.
print("\nIntersection of two sets")
print(set1.intersection(set2))

#or

print(set1 & set2)

#Intersection of more than two sets

print("\nIntersection of more than two sets")
print(set1.intersection(set2,set3))

#or

print(set1 & set2 & set3)

#3. Update

#The update() method updates the current set, by adding items from another set.
print("\nUpdate the set")
set1.update(set2)
print(set1)
