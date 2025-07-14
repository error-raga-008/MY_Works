#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);
    
    int len = strlen(str);
    int i, is_palindrome = 1;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}