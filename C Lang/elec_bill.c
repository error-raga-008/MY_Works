#include<stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c,d,e,f,x = 50*0.5,y = 100*0.75,z = 100*1.20, g = 250*1.50, t;

    printf("Enter Your Unit ");
    scanf("%f", &a);
    printf("\n");
    printf("Your unoits are %f and \n",a);
    if (a <= 50)
    {
        t = a*0.5;
    }
    else if (a <= 100)
   {
        b = a - 50;
        t = b*0.75 + x;
    }
    else if (a <= 200)
   {
        c = a - 150;
        t =  c*1.2 + x + y;
    }
    else if (a <= 250)
   {
        c = a - 250;
        t= c*1.5 + x + y + z;
    }
    else if (a > 250)
   {
        e = a - 500;
        t =  e*1.5 + x + y + z + g;
    }

    printf("Your Total Bill is %f",t*0.20);

    return 0;
}
