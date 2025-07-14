
#define a function with no parameter and give a basic greeting when called

def greet():
    print("HELLO WORLD")

greet()

#define a function with custom greeting using a parameter

def greet_2(name):
    print(f"HELLO {name}")

x = input("Enter Your name ")
greet_2(x)


#define a function to take radius of the circle form the user and return the area of the circle

def area(rad):
    return print(f"Area of the circle is {rad*rad*3.14}")

r = float(input("Radius of the circle: "))
area(r)