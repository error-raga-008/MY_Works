#include<stdio.h>
// TO get the value from the user we use scanf
int main(int argc, char const *argv[])
{
    int a;
    // we declared a var here to get assign by scanf

    printf("\n Enter the Value of A  ");

    // Here the format specifier OR (%d) depend on the type of input like we use %c to get character as input 
    scanf("%d", &a);
    //here we use "&" or address specifier to assign the inputed value to a variable
    printf("\n The Value of a is %d", a);
    printf("\n");
    return 0;
}
