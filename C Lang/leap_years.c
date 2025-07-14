#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter the year ");
    scanf("%d", &a);

    if (a%4 == 0)
    {
       printf("Year is a Leap Year");
    }
    else
    {
        printf("Year is not a Leap Year");
    }
    return 0;
}