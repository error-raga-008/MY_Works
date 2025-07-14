#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("Enter the Temp ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("freezing weather");
    }
    else if (a >= 0 && a <= 10)
    {
        printf("Very Cold");
    }
    else if (a > 10 && a <= 20)
    {
        printf("Cold");
    }
    else if (a > 20 && a <= 30)
    {
        printf("Normal");
    }
    else if (a > 30 && a <=40)
    {
        printf("Hot");
    }
    else if (a > 40)
    {
        printf("Very Hot");
    }
    

    return 0;
}
