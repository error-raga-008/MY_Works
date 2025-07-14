#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[4] = {1,2,34,4};

    int k = 0,j=3,t;

    while (k < j)
    {
        t = a[k];
        a[k] = a[j];
        a[j] = t;

        k++;
        j--;
    }
    

    for (int i = 0; i < 4; i++)
    {
        printf("%d ",a[i] );
    }
    
    
    
    
    return 0;
}


