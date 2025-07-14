#include <stdio.h>


int add(int x,int y, int z) {
    
    int a = x,b = y,c = z,temp;

    if (a > b)
    {
       if (a > c)
       {
        printf("The value of a is greater than b and c\n");
       }
       else
         {
              printf("The value of c is greater than a and b\n");
         }
    }
    else if (b > c)
    {
        printf("The value of b is greater than a and c\n");
    }
    else
    {
        printf("The value of c is greater than a and b\n");
    }
    
}


int main() {

    int a,b,c;

   printf("Enter the value of a and b and c\n");
   scanf("%d %d %d",&a,&b,&c);
   add(a,b,c);

return 0;
}