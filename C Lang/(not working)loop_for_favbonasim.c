#include <stdio.h>
//print number 1 to 10
int main(int argc, char const *argv[])
{
    int a = 0,b = 1,c;

    for (int i = 1; i <= 20; i++)
    {
        c = a+b;
        printf("%d", a);
        printf(" ");
        a=b;
        b=c;
    }
    
    printf("\n");



    return 0;
}
