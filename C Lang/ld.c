#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    float b;
    char c;

    // %ld is used to find how many memory does that var take to be stored 
    // "sizeof('var name')" is used to enter that var we need to find ld of 

    printf("Enter the 1st Number ");
    scanf("%d", &a);
    printf("\n Your Unit takes %ld",sizeof(a));\
    printf("\n");

    printf("Enter the 2nd Float ");
    scanf("%f", &b);
    printf("\n Your Unit takes %ld",sizeof(b));
    printf("\n");

    printf("Enter the 3rd Character ");
    scanf(" %c", &c);
    printf("\n Your Unit takes %ld",sizeof(c));
    printf("\n");


    return 0;
}
