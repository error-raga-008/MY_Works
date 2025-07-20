import random
import string

a = int(input("Enter length\n"))

random_string = ''.join(random.choices(string.ascii_letters + string.digits, k=a))

print(random_string)