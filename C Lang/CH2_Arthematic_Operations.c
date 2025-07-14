#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("\n Enter the Value of A  ");
 
    scanf("%d", &a);
    
    printf("\n Enter the Value of B  ");
 
    scanf("%d", &b);

    printf("\n The addtion of a and b is %d", a+b);
    printf("\n");

     printf("\n The subraction of a and b is %d", a-b);
     printf("\n");

      printf("\n The multiplication of a and b is %d", a*b);
      printf("\n");

       printf("\n The divison of a and b is %d", a/b);
       printf("\n");

       printf("\n The increment of a is %d", ++a); //increment means +1 and is goten by {++a}
       printf("\n");

       printf("\n The decrement of b is %d", --b); //decrement means -1 and is goten by {--a}
       printf("\n");


       printf("\n The Modulus of a and b is %d", a%b); // Modulus or to get reminder of a division is called moduls and uses {a%b}
       printf("\n");



    printf("\n");
    return 0;
}
