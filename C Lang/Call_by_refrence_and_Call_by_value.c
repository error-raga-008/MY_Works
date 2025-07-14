#include <stdio.h>

// call by value
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of x after swap is %d and the value of y after swap is %d\n", a, b);
}

// call by reference
void swap1(int *a, int *b){
    int temp1;
    temp1 = *a;
    *a = *b;
    *b = temp1;
}

int main(int argc, char const *argv[])
{
    int x = 4, y = 5;
    printf("The value of x is %d and the value of y is %d\n", x, y);
    swap(x, y);
    printf("The value of x is %d and the value of y is %d\n", x, y);
    swap1(&x, &y);
    printf("The value of x is %d and the value of y is using call by refrence is %d\n", x, y);
    return 0;
}
