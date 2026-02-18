a = " Hello World "

print(a*5) #print the string 5 times

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

x = "SUP WIGA NIIGA"

print(x.find("WIGA")) #Find the position of the give sub string in main string 

x = "         SUP WIGA NIIGA          "
print(x.lstrip()) #remove the whitespace from left side
print(x.rstrip()) #remove the whitespace from right side

x = x+" Elo" #concate extra string to the string 
print(x)

print(x.endswith("n")) #check if the given string start or end with this char and output True or False
print(x.startswith("d"))
