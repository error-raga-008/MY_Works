#creating a class

class DOG:
    species = "DOGO" #this is a class var
    def __init__(self,name,breed): #this is a Constructor
        #here __init__ is used to make a constructor, and it automatically called when an obj is declared
        # here "self" refers to the instance (object) being created.
        # "name" and "breed" are parameters passed when creating an object
        self.name = name
        self.breed = breed
    def bark(self): #self is important and without it the code wont work
        print(f"{self.name} is a {self.breed} and like to go like a {DOG.species}")

#creating an object
D = DOG("Jack","labra") #this is a object

D.bark() #calling a class function
print(D.name) #using a clas instace to print this
print(D.species) #using a clas instace to print this
print(D.species) #printing a class var