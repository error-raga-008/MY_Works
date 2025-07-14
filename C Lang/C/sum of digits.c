#include<stdio.h>

int add(int x){
    int sum = 0;

    while (x != 0)
    {
        sum = x%10 + sum;
        x = x/10;
    }

    printf("%d\n", sum);
    
}

int main(int argc, char const *argv[])

{
    int a,b,c;

    printf("Enter value of A ");
    scanf("%d",&a);
    printf("\n");


    add(a);

    return 0;
}
