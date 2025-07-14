#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c=0;

    for ( a = 1; a <= 5; a++,c=0)
    {
        for ( b = 1; b <= 5 - a; b++)
        {
            printf("  ");
        }
        while (c != 2*a-1)
        {
            
            printf("A");
            c++;
        }
        printf("\n");
        
    }
    
    return 0;
}
