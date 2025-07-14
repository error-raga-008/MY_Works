#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 50;

    int *p; // p is a pointer variable that stores the address
    p = &num; // &num is the address of num

    printf("The address of num is %p\n", &num); // &num is the address of num
    
    printf("The value of num accoirding to pointer is %p\n", p); // p is the address of num

    printf("The value of num is %d\n", *p); // *p is the value of num

    // Pointer arithmetic

    printf("The value of num is %p\n", p);
    printf("The value of num is %p\n", (p+1));
    printf("The value of num is %p\n", (p+2)); 

    // Pointer comparison

    int a =10, b=20;
    int *p1 = &a; 
    int *p2 = &b;
    if (p1 == p2)
    {
        printf("The value of p1 and p2 is same\n"); //
    }
    else
    {
        printf("The value of p1 and p2 is not same\n"); 
    }

    //array assing using pointer

    int s[5] = {1, 2, 3, 4, 5};

    int *p5 = s;
    int i;

    for ( i = 0; i < 5; i++) // printing the value of s using p5
    {
        printf("The value of s[%d] is %d\n", i, *(p5+i));
    }

    //array of pointers

    int y[5] = {1, 2, 3, 4, 5};

    int *p6[5], j;

    for ( j = 0; j < 5; j++) // storing the address of y in p6
    {
        p6[j] = &y[j];
    }

    for ( j = 0; j < 5; j++) // printing the value of y using p6
    {
        printf("The value of y[%d] is %d\n", j, *p6[j]);
    }

    
    
    return 0;
}
