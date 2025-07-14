#include<stdio.h>

int main(int argc, char const *argv[])
// else if is used when we want to check multiple many condition and continue with condition that is true first 
{
    int a, b, c;

    printf("Enter the 1st number ");
    scanf("%d", &a);
    printf("\n");

    printf("Enter the 2nd number ");
    scanf("%d", &b);
    printf("\n");

    printf("Enter the 3rd number ");
    scanf("%d", &c);
    printf("\n");

    if (a > b)
    {
        if (a > c)
        {
            printf("1st number is the largest number");
        }
        else
        {
            printf("3rd number is the largest number"); 
        }
        
    }
    else if (b > c)  
    {
        printf("2nd is the largest number");
    }
    else
    {
        printf("3rd is the largest number");
    }
    
    
    


    return 0;
}
