#include <stdio.h>


int add(int x[], int size) {
    int i, total = 0;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",x[i]);
        total += x[i];
    }
    return total;
    
}


int main() {

   int a[] = {1,2,3,4,5};
   int s = sizeof(a)/sizeof(int);
   int result = add(a,s);
   printf("total = %d", result);
return 0;
}