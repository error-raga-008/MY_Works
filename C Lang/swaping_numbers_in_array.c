#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int b[5] = {2,4,6,8,10};
    int i;

    for ( i = 0; i < 5; i++)
    {
        b[i] = a[i];
    }

    printf("the value of array b is \n");
    for ( i = 0; i < 5; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }


    return 0;
}
