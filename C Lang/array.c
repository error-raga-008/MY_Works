#include <stdio.h>

 int main(int argc, char const *argv[])
 {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i, size;

    printf("a[1] = %d\n", a[1]);

    for ( i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    //to get the value form the user

    printf("Enter the values of b array: \n");

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("The values of b array are: \n");

    for ( i = 0; i < 5; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }

    //to get the size of array form user
    
    printf("Enter the size of c array: \n");

    scanf("%d", &size);
    int c[size];
    

    printf("Enter the values of c array: \n");

    for ( i = 0; i < size; i++)
    {
        scanf("%d", &c[i]);
    }
    
    printf("The values of c array are: \n");

    for ( i = 0; i < size; i++)
    {
        printf("c[%d] = %d\n", i, c[i]);
    }


    return 0;
 }
 