#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int i;
    int total = 0, avg;

    for ( i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
        total = total + a[i];
    }

    printf("the total of this array is %d\n", total);
    
    //to find the average of this array is

    avg = total/5; //5 or the no. of index in array

    printf("average of this array is %d", avg);

    return 0;
}
