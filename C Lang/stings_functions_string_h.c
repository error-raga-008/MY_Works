#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //string length function strlen()

    char a[20] = "Hello, World!";
    char b[20] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("The length of string a is %zu\n", strlen(a));
    printf("The length of string b is %zu\n", strlen(b));


    //string copy function strcpy()
    
    char c[20];
    strcpy(c, a); // copy string a to string c
    printf("Now the string c is %s\n", c);
    printf("Now the string a is %s\n", a);
    printf("Now the string b is %s\n", b);

    //string merge function strcat() or called string concatenation

    strcat(a, b); // merge string b into string a
    printf("Now the string a is %s\n", a);
    printf("Now the string b is %s\n", b); 

    //string character search function strchr()

    char x;
    printf("Enter a character to search in string a: ");
    scanf("%c", &x);
    
    if (strchr(a, x) != NULL)
    {
        printf("We found %c in string a\n", x);
    }
    else
    {
        printf("We did not found %c in string x\n", x);
    }
    
    //string compare function strcmp()

    char d[20] = "Hello, World!";
    char e[20] = "Hello, World!";
    printf("Now the string d is %s\n", d);
    printf("Now the string e is %s\n", e);
    strcmp(d, e);
    if (strcmp(d, e) == 0)
    {
        printf("The strings d and e are identical\n");
    }
    else
    {
        printf("The strings d and e are not identical\n");
    }

    //fgets () function
    // fgets(string_name, size of sting, stdin);


    return 0;
}
