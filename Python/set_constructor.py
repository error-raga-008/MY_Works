#set constructor

x = set() #this is an empty set const
print(x)

a = set([10,100,1]) #setting a list inside the set
b = set([10,100,20,1]) #setting a list inside the set
print(a)

#SET METHDOS

a.remove(1) #this will give error if the given element is not found

a.discard(2) #this will not give error if the given element is not found

print(a.union(b)) #the union of the both set

print(a.intersection(b)) #the intersection of the both set

print(a.difference(b)) #the diffrence of the both set
print(a.symmetric_differencedifference(b))

print(a.issubset(b)) #open ur eye
print(a.issuperset(b))
print(a.isdisjoint(b))

#frozen set

y = frozenset({1,2,3,45})
#in frozenset we cannot edit it after declaring it