class emp: #"class" is used to define the class 

    def __init__(self): #"__init__" is how to make a constructor
        print("Tis is constructor")

    id = 1
    def getdata(self): #"def" is used to define the function
    #"self" is always passed in the functions parameter because it tells us that we are dealing with the current instance
    # or the obj of the class and we dont need to passit when we call the function
        print("Hello world")
        print(self.id)
    
    def dam(self,a):
        print(a)

    def __del__(self):  #"__del__" is how to make a constructor
        print("this is a distructor")

e = emp() #this is how u make the obj of the class
e.getdata()
e.dam(2) #passing an argument

def hello(): #how to define the func without a class
    print("wow this is shit")

hello() 

del e #this is how to del a obj