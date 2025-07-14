#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5}; // this is an unzied array
    float b[] = {1,2,3,4}, sizee; // this is an unzied flaot array
    int i, size;

    // to find the number of indexs in an array

    size = sizeof(a) / sizeof (int);

    printf ("The numbe of index in a[] array is %d \n", size);
 
    //FOR float array
    sizee = sizeof(b) / sizeof (float);

    printf ("The numbe of index in b[] array is %f", sizee);



    return 0;
}
