class menu:
    def __init__(self):
        print("Menu Item are")
        print("------------------------")
        print("1.Apple RS.10")
        print("2.Bpple RS.30")
        print("3.Cpple RS.20")
        print("------------------------")

class order(menu):
    def __init__(self):
        super().__init__()
    
    x =0
    sum =0
    ord = []

    def orde(self):
       while True:
            self.x = int(input("Enter the num of the item u want to add and -1 to palce order "))

            if(self.x == 1):
                self.ord.append("Apple")
                self.sum+=10
            elif(self.x == 2):
                self.ord.append("Bpple")
                self.sum+=30
            elif(self.x == 3):
                self.ord.append("Cpple")
                self.sum+=20
            elif(self.x == -1):
                break
            else:
                print("Enter valid")

    def final(self):
        print("Your Final order is")

        for i in self.ord:
            print(i)
            print("------------------------")
        
        print("and the total cost is ",self.sum)
    
o = order()

o.orde()
o.final()