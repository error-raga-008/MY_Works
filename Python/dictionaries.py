#dic

a = {
    "a":1,
    "b":2,
    "c":3
    }

print(a)

#methods of Dictionaries

print(a.items()) #print all the items only

print(a.keys()) #print all the keys only

print(a.pop("a")) #pop is used to remove an item with a given key
print(a.popitem()) #popitem is used to remove them item

print(a.values()) #this is used to print the number of item in the dic

print(a.fromkeys("b","c")) #fromkeys method returns a dictionary with the specified keys and the specified value.

x = a.copy() #make a copy the dict

print(x) 

a.update({"a":1}) #used to Insert an item to the dictionary

print(a.get("a")) #get the value of the given key

print(a["a"]) #print only the value of a

print(a.keys())

print(a.values())
