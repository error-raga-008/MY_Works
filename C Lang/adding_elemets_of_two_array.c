#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[4] = {1,3,5,7};
    int b[4] = {2,4,6,8};
    int i,j;
    
    for ( i = 0; i < 4; i++)
    {
        printf("%d\n", a[i]+b[i]); //other operations can be performed by changing the signs
    }
    

    return 0;
}
