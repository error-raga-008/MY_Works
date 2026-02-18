#tupel methods

a = (1,2,3,4)

print(a.count(1)) #count the number of given element in the tuple


print(a.index(1)) #Searches the tuple for a specified value and returns the position of where it was found

# Creating tuples
t1 = (10, 20, 30)
t2 = (40, 50)

# 1️⃣ Length
print("Length of t1:", len(t1))

# 2️⃣ Concatenation
t3 = t1 + t2
print("Concatenation:", t3)

# 3️⃣ Repetition
t4 = t1 * 2
print("Repetition:", t4)

# 4️⃣ Membership
print("Is 20 in t1?", 20 in t1)

# 5️⃣ Iteration
print("Iteration over tuple:")
for item in t1:
    print(item)
