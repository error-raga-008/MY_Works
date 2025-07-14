#include <stdio.h>


int add() {
    int a = 10,b = 20;
    return a+b;
}


int main() {

    printf("The sum of a and b\n");
    printf("The sum is %d",add());

return 0;
}