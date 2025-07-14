# Given a list of numbers, write a function that returns a set containing only the even numbers using list comprehension.


x = input()
lst = []

for i in x:
    lst.append(i)

print(lst)

if lst[0] == "[":
    if lst[1] == "{":
        if lst[3] == "}":
            if lst[4] == "]":
                print("GG BOIS")
            else:
                print("WTF")
        else:
            print("WTF")
    else:
        print("WTF")
else:
    print("WTF")    