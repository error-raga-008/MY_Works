# Dictionaries are used to store data values in key:value pairs.
# A dictionary is a collection which is unordered, changeable and indexed.
# In Python dictionaries are written with curly brackets, and they have keys and values.

# Creating a dictionary

person = {
    "name": "Rishi",
    "age": 18,
    "is_student": True,
    "city":"AMD"
}

print(person)

print(person.values()) #to only print the value of the dictionaries

#to print all two elemts using a loop

for i,j in person.items(): #items are all the details of the
    if j >= 15:
        print(i)

# Accessing the elements of the dictionary

# 1. Accessing the elements of the dictionary using key

print("\nprinting the dictionary using key")
print(person["name"]) #printing the value of the key name
#key has to be inside brackets and is case-sensitive

# 2. Accessing the elements of the dictionary using get() method

print("\nprinting the dictionary using get() method")
print(person.get("age")) #printing the value of the key age

#Aadding a new key value pair to the dictionary

print("\nadding a new key value pair to the dictionary")
person["email"] = "Email.com" #adding a new key value pair to the dictionary using the key
print(person)

# Modifying the elements of the dictionary

print("\nediting the elements of the dictionary using key and modifying the elements of the dictionary")
person["age"] = 20 #modifying the value of the key age
print(person)

# Removing elements from the dictionary

# 1. To remove elements from the dictionary, use the pop() method.

print("\nremoving elements from the dictionary using pop() method")
person.pop("email") #removing the key value pair from the dictionary using the key
print(person)

# 2. Using the del keyword

print("\nremoving elements from the dictionary using del keyword")
del person["city"] #removing the key value pair from the dictionary using the key
print(person)

# 3. Using popitem() method3

print("\nremoving elements from the dictionary using popitem() method")
person.popitem() #removing the last key value pair from the dictionary
print(person)

# 4. Using clear() method

print("\nremoving elements from the dictionary using clear() method")
person.clear() #removing all the key value pair from the dictionary
print(person)


# USING KEYS() METHOD

# The keys() method returns a view object. The view object contains the keys of the dictionary, as a list.
# The view object will reflect any changes done to the dictionary.

person = {
    "name": "Rishi",
    "age": 18,
    "is_student": True,
    "city":"AMD"
}

print("\nprinting the keys of the dictionary using keys() method")
new_dict = person.keys()
print(new_dict)

#Using Update() method

# The update() method updates the dictionary with the specified key-value pairs.

update = {"City" : "New York", "Age" : 22}

person.update(update)
print("\nupdating the dictionary using update() method")
print(person)
