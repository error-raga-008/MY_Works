#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter the day number ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("The Day that you have entered is Monday");
    }
    else if (a == 2)
    {
        printf("The Day that you have entered is Tuesday");
    }
    else if (a == 3)
    {
        printf("The Day that you have entered is Wednesday");
    }
    else if (a == 4)
    {
        printf("The Day that you have entered is Thursday");
    }
    else if (a == 5)
    {
        printf("The Day that you have entered is Friday");
    }
    else if (a ==6)
    {
        printf("The Day that you have entered is Saturday");
    }
    else if (a == 7)
    {
        printf("The Day that you have entered is Sunday");
    }
    else
    {
        printf("Enter a valid day number");
    }



    return 0;
}
