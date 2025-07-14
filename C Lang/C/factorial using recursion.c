#include <stdio.h>

int y = 1;

int fun(int x){

    if (x == 0)
    {
        return 1;
    }
    else
    {
        return x*fun(x-1); 
    }
    
}

int main(int argc, char const *argv[])
{
    int a = 6;

   printf("%d",fun(a));
    

    return 0;
}
