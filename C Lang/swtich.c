#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;
    char x;

    printf("\nEnter the value of A ");
    scanf("%d", &a);
    printf("\nEnter the value of B ");
    scanf("%d", &b);
    printf("\n");

    printf("\n List of Operations that you can do are...");
    printf("\n Addtion + ");
    printf("\n Subtraction - ");
    printf("\n Multiplication * ");
    printf("\n Division / ");
    printf("\n Reminder % ");
    printf("\n");

    printf("\n What Operation you would like to do....");
    scanf(" %c", &x);

    // switch is used in replacement of else if statment but with limitaion

    switch (x) 
    {
    case '+': // case can also be condtion and what we put inside "  ''   " is the condtion or the input that needs to be matched it can be both var or condtion
        printf("\n Addtion of A and B is %d ", a+b);
        break; // "break" is used to end the execution when the condtion is true and not to move ahead
    case '-':
        printf("\n Subtraction of A and B is %d ", a-b);
        break;
    case '*':
        printf("\n Multiplication of A and B is %d ", a*b);
        break;
    case '/':
        printf("\n Division of A and B is %d ", a/b);
        break;
    case '%':
        printf("\n Reminder of A and B is %d ", a%b);
        break;

    default:
        printf("\n INVALID OPP");
        break;
    }



    return 0;
}
