#include<stdio.h>

int main(int argc, char const *argv[])
//
{
    int a;

    printf("Enter your age ");
    scanf("%d", &a);
    printf("\n");


    if (a >= 18)
    {
        printf("you can vote");
    }
    else
    {
        printf("you cant vote");
    }
    


    return 0;
}
