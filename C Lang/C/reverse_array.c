#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x[5] = {1,2,3,4,5};

    int a=0,b=5-1,c;

    while (a < b)
    {
        int temp = x[a];
        x[a] = x[b];
        x[b] = temp;

        a++;
        b--;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",x[i]);
    }
    
    

    return 0;
}
