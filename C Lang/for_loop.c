#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c = 1;


    //to print 
    // 1
    // 22
    // 333
    // 4444
    // 55555
    for (a = 1; a <= 5 ; a++)
    {
        for (b = 1; b <=a; b++)
        {
           printf("%d", a);
           printf(" ");
        }
        printf("\n");
        
    }

    printf("\n");
    //to print 
    // 1
    // 12
    // 123
    // 1234
    // 12345

    for (a = 1; a <= 5 ; a++)
    {
        for (b = 1; b <=a; b++)
        {
           printf("%d", b);
           printf(" ");
        }
        printf("\n");
        
    }

    printf("\n");
    //to print this updside down
    // 1
    // 12
    // 123
    // 1234
    // 12345

    for (a = 1; a <= 5; a++)
    {
        for (b = 5; b >= a; b--)
        {
            printf("%d", b);
            printf(" ");
        }
        printf("\n");
        
    }

    //to print 
    // 1
    // 23
    // 456
    // 78910

    for ( a = 1; a <= 5; a++)
    {
        for ( b = 1; b <= a; b++ )
        {
            printf("%d", c++);
            printf(" ");
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}
