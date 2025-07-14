from errno import ECHILD

from setuptools.discovery import chain_iter

class Grand:
    def seen(self):
        print("this is a grandparent class that can be accessed by the child as well parent class")
class Parent(Grand):
    def show(self):
        print("this is a parent class and it can be accessed by any child class")

class CHILD(Parent):  #this gives the inheritance to the parent class
    def display(self):
        print("this a child class")

#creating aa object
c = CHILD()

c.seen() #this is a function of grandparent class that can be accessed by child class object
c.show() #this is the function of parent class that can be accessed by child class object
c.display()

p = Parent()

p.seen()
p.show()
#p.display() #parent class obj cant access


########################################################################################################################

#method overriding

class AA:
    def GG(self):
        print("this is a main thing")
class BB(AA):
    def GG(self):
        super().GG() #to fix this we need to use super() function and this will call the function in the parent class
        print("this is a child thing")

b= BB

#b.GG() This wont work as both class have function with the same name
b.GG()