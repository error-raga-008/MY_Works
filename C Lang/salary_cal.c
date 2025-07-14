#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a;

    printf("Enter Your Salary ");
    scanf("%f", &a);
    printf("\n");
    printf("Your salary is %f and your ",a);
    if (a <= 10000)
    {
        printf("HRA is %f and ", a/20*100);
        printf("DR is %f and ", a/80*100);
    }
    else if (a <= 20000)
    {
        printf("HRA is %f and ", a/25*100);
        printf("DR is %f and ", a/90*100);
    }
    else if (a > 20000)
    {
        printf("HRA is %f and ", a/30*100);
        printf("DR is %f and ", a/95*100);
    }
    
    

    return 0;
}
