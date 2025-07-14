#include <stdio.h>


int main(int argc, char const *argv[])
{
    char a[20]; // char array declation
    printf("Enter your name: "); // print statement only can get 1 word at a time
    scanf("%s", a);
    printf("Your name is %s\n", a);

    //gets(a); // gets() is not safe to use and does not work

    printf("Enter your name: ");
    fgets(a, 20, stdin); // fgets() is a repalcement for gets()
    return 0;
}

// C Program to Calculate the Length of a String without
// strlen function

int string_length(char* str)
{
    // Iterate through the string until the null terminator
    // is reached
    int len = 0;

    // Iterate through the string until the null terminator
    // is reached
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}
