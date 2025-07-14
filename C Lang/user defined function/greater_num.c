#include <stdio.h>


int add(int x,int y) {
    int a = x,b = y,temp;
    if (a<b)
    {
        return printf("The value of b is greater than a\n");
    }
    else 
    {
        return printf("The value of a is greater than b\n");
    }
    
}


int main() {

    int a,b;

   printf("Enter the value of a and b\n");
   scanf("%d %d",&a,&b);
   add(a,b);

return 0;
}