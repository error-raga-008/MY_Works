a = " Hello World "

print(a.capitalize()) #Converts the first character to uppercase
print(a.upper()) #Converts all char to uppercase
print(a.lower()) #Converts all char to lowercase
print(a.swapcase()) #Convets all uppercase to lowercase and lowercase to uppercase

print(a.count('o')) #count the number of times 'o' occured
print(a.find('o')) #find the first index of 'o' occured
print(a.index('o')) #work same as find but will give error when word not find
print(len(a)) #find the len of the string

print(a.islower()) #check if the string is in lowercase
print(a.isupper()) #check if the string is in uppercase
print(a.isdigit()) #check if the string is digit
print(a.isalnum()) #check if the string is alphanumeric
print(a.isspace()) #check if the string has space

#------------------------------------------------------------------------------------------------------------------------#

print(a.strip()) #Remove all the white space from start and end 

#strip() is also used to remove specific char from a string
s = '  ##*#GeeksforGeeks#**##  '

res = s.strip('#* ')

print(res) #GeeksforGeeks -output