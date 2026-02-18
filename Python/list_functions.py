#lsit and it functions

a = [1,2,3,4,5,6]

b = ["A","B","C","D"]

a.append(7) #add element to the last of the list

c = a.copy() #make a copy of list a

a.insert(1,2) #Inserts an element at a specified position
# Insert 2 at index 1

print(a.pop()) #pop a the last element or specified element from the list
a.pop(2)

c.clear() #remove all the element from the list

print(a.index(1)) #print the element at the given index


print(a.count()) #count the number of element in the list

a.reverse() #reverse the list of the element

a.sort() #sort the list

a.extend(1) #add the element to the last of the list
#DOES NOT WORK

# print(a.max())
# print(a.min()) #print the max and min element of the list

#print(a.sum()) #print the sum of the list


#print a list in reverse order 
a = [1,2,3,4]

for i in range(-1,-5,-1):
    print(a[i])
