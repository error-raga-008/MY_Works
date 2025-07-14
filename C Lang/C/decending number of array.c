#include<stdio.h>

int add(int x[5]){
    int total = 0;
    int end = 5-1;
    for (int i = 0, j = 5 - 1; i < j; i++, j--) {
        int temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    for (int i = 0; i <5; i++)
    {
        printf("%d",x[i]);
    }
    
}

int main(int argc, char const *argv[])
{   
    int a[5]={1,2,3,4,5};

    add(a);

    return 0;
}
