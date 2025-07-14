#include <stdio.h>


int add(int x,int y) {
    int a = x,b = y,temp;
    printf("The value of a before swap is %d\n",a);
    printf("The value of b before swap is %d\n",b);
    temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
}


int main() {

    int a,b;

   printf("Enter the value of a and b\n");
   scanf("%d %d",&a,&b);
   add(a,b);

return 0;
}