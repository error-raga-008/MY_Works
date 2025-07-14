#include <stdio.h>


int add(int x) {
    
    int a = x,temp,i;

    for ( i = 2; i < a; i++)
    {
        if (a%i == 0)
        {
            printf("The number is not prime\n");
            break;
        }
        else
        {
            printf("The number is prime\n");
            break;
        }
    }
    
}

int main()
{

    int a,b,c;

   printf("Enter the value of a and b and c\n");
   scanf("%d",&a);
   add(a);

return 0;
}