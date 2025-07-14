#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Enter the 1st Angle ");
    scanf("%d", &a);
    printf("\n");

    printf("Enter the 2nd Angle ");
    scanf("%d", &b);
    printf("\n");

    printf("Enter the 3rd Angle ");
    scanf("%d", &c);
    printf("\n");

    if (a+b+c == 180)
    {
        printf("Triangle can be form");
    }
    else
    {
        printf("Triangle cant be form");
    }

    return 0;
}