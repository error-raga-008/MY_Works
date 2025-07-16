import random
import string

def generate_random_mapping(key):
    random.seed(key)
    characters = string.ascii_letters + string.digits + string.punctuation
    shuffled_characters = list(characters)
    random.shuffle(shuffled_characters)
    return dict(zip(characters, shuffled_characters))

def fix_string():
    user_string = input("Enter the string to fix: ")
    while True:
        user_key = int(input("Enter the integer key (up to 4 digits): "))
        if 0 <= user_key <= 9999:
            break
        else:
            print("Please enter a valid integer key up to 4 digits.")
    mapping = generate_random_mapping(user_key)
    fixed_string = ''.join(mapping.get(char, char) for char in user_string)
    print(f"Fixed string: {fixed_string}")
    return fixed_string, user_key

def defix_string():
    fixed_string = input("Enter the fixed string: ")
    while True:
        user_key = int(input("Enter the integer key used to fix (up to 4 digits): "))
        if 0 <= user_key <= 9999:
            break
        else:
            print("Please enter a valid integer key up to 4 digits.")
    mapping = generate_random_mapping(user_key)
    reverse_mapping = {v: k for k, v in mapping.items()}
    original_string = ''.join(reverse_mapping.get(char, char) for char in fixed_string)
    print(f"Original string: {original_string}")
    return original_string

def main():
    choice = input("Do you want to fix or defix things? (1 for fix / 0 for defix): ").strip()
    if choice == '1':
        fix_string()
    elif choice == '0':
        defix_string()
    else:
        print("Invalid choice. Please enter '1' for fix or '0' for defix.")

if __name__ == "__main__":
    main()
