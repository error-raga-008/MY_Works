#include <stdio.h>


int add() {
    int a = 10,b = 20,temp;
    printf("The value of a before swap is %d\n",a);
    printf("The value of b before swap is %d\n",b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
}


int main() {

   add();

return 0;
}