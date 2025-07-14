#include <stdio.h>
int main()
{
    int i, a, j, k = 0;
    int  x = 'A';
    int  y = 'Z';
    
    for ( i = 1; i <= 5; i++,k = 0)
    {
        for ( j = 1; j <= 5 - i ; j++)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            if (k % 2 == 0) {
                printf("A ");
            } else {
                printf("D ");
            }
            k++;
        }
        printf("\n");
    }
  
    


    return 0;
}