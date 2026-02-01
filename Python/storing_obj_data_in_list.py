class book:
    def __init__(self):
        self.empid = int(input("id = "))
    def printed(self):
        print(self.empid)

#this is to store obj data in list

e1 = []

for x in range (3):
    b = book()
    e1.append(b)
for y in e1:
    y.printed()