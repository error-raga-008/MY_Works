#include <stdio.h>


int add(int x,int y) {
    int a = x,b = y,temp;
    a = a*a;
    b = b*b;
    printf("The square of a is %d\n",a);
    printf("The square of b is %d\n",b);
}


int main() {

    int a,b;

   printf("Enter the value of a and b\n");
   scanf("%d %d",&a,&b);
   add(a,b);

return 0;
}