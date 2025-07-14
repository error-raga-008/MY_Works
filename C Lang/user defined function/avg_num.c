#include <stdio.h>


int add(int x,int y, int z) {
    
    int a = x,b = y,c = z,temp;

    printf("total of a,b and c is %d\n",a+b+c);
    return (a+b+c)/3;
    
}


int main() {

    int a,b,c;

   printf("Enter the value of a and b and c\n");
   scanf("%d %d %d",&a,&b,&c);
   printf("The average of a,b and c is %d",add(a,b,c));

return 0;
}