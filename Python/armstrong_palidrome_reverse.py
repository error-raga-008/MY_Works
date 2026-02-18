
a = 153

c = 0
x = a

#for armstrong
while(a != 0):
    b = a%10

    c += b*b*b

    a = a//10

if(c == x):
    print("GG")
else:
    print("NO")

#for reveser

while(a != 0):
    b = a%10

    c = a*10+b

    a = a//10


#for palidrom check if reeverse = real number
