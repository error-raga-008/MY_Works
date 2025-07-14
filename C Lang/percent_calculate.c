#include<stdio.h>

int main(int argc, char const *argv[])
//we use float because percent has to be in decimals
{
    int a, b, c, d = 300;
    float e, f;


    printf("Enter the 1st number ");
    scanf("%d", &a);
    printf("\n");

    printf("Enter the 2nd number ");
    scanf("%d", &b);
    printf("\n");

    printf("Enter the 3rd number ");
    scanf("%d", &c);
    printf("\n");
    
    printf("Your 1st number is %d",a);
    printf("\n");
    printf("\n");
    printf("Your 2nd number is %d",b);
    printf("\n");
    printf("\n");
    printf("Your 3rd number is %d",c);
    printf("\n");
    printf("\n");

    f = a+b+c;

    e = f/d*100;
    printf("\n");

    printf("Your percentage is %f", e);


    return 0;
}
