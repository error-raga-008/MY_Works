#Opeing a file

#assigning a var to the file

file = open("demo.txt",'r') #here 'r' means it will open it in reading mode

#now opening the file

content = file.read()
print(content)

#closing the file

file.close()
#######################################################################################################################
#Now Wiring to the file

file = open("demo.txt",'w') # 'w' = writing mode

#now writing to the file

file.write("This is a new line")

file.close()
#######################################################################################################################
#Now making change to a existing file or appending a file

file = open ("demo.txt",'a') # "a" = appending

file.write(""
           "This is a additional text")

file.close()
#######################################################################################################################
#we can also a file in multiple mode

file = open("demo.txt", "a+") #by default if we add "a+" means we opeing it in reading and appned method

file.write("GG")
print(file.read())
file.write("GG")
print(file.read())
file.close()
#######################################################################################################################
#writing user input into a file

file = open("demo.txt",'w')

name = input("Enter Your name ")

file.write(f"Your name is {name}\n")

#printing the file line by line

with open("demo.txt",'r') as file:
    for line in file:
        print(line.strip())
file.close()