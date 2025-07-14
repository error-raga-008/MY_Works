#include <stdio.h>

int main()
{
    int x,y=1,z;

    scanf("%d",&x);
    printf("\n");

    for (int i = 1; i < x; i++)
    {
        y = y*i;
    }
    
    
    printf("the factorial numb is %d",y);
    

    return 0;

}