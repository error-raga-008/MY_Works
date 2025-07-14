#include <stdio.h>


int add(int x[5]) {
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n",x[i]);
    }
    
}


int main() {

   int a[5] = {1,2,3,4,5};
   add(a);

return 0;
}