for i in range(1,6):

    for k in range(5- i):
        print(" ",end=" ")
    for j in range(1,i*2):
        print("*",end=" ")

    print()

#inveted pyramid

for i in range(6,0,-1):
    for j in range(6-i):
        print(" ",end=" ")
    for k in range(2*i -1):
        print("x",end=" ")
    print()

#inverted right agnel triangle

for i in range(6,0,-1):
    for j in range(i,0,-1):
        print("*",end=" ")
    print()