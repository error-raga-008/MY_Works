import random

x = random.randint(1, 10)

num = int(input("Enter a number between 1 to 10 \n"))

while True:

    if num == x:
        print("Correct number entered GG")
        break
    elif num > x:
        print("Go a little lower")
        num = int(input("Enter a number between 1 to 10\n"))
    elif num < x:
        print("Go a little higher")
        num = int(input("Enter a number between 1 to 10\n"))
