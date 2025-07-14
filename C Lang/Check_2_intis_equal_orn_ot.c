#include<stdio.h>

int main(int argc, char const *argv[])
//
{
    int a, b;

    printf("Enter the 1st number ");
    scanf("%d", &a);
    printf("\n");

    printf("Enter the 2nd number ");
    scanf("%d", &b);
    printf("\n");

    if (a == b) //if and else is self defining
    {
        printf("Both numbers are equal");
    }
    else
    {
        printf("Both number are not equal");
    }
    


    return 0;
}
