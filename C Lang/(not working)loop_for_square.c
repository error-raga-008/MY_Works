#include <stdio.h>
//print number 1 to 10
int main(int argc, char const *argv[])
{
    int a = 1,b,c,d,f;

    while (a <= 30)
    {
       b = a++;
       c = b*b;
       printf("%d", c);
       f = b/c;
       a = f + 1;
    }
    



    return 0;
}
