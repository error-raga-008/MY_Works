#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int i,j;
    int temp;

    //for desecding
    for ( i = 0; i < 4; i++) // Outer loop to iterate through all elements
    {
        for ( j = i + 1; j < 5; j++)// Inner loop to compare with subsequent elements
        {
            if (a[i] < a[j]) // Compare in descending order for descending sort
            {
                temp = a[i];  // Swap elements if they are in the wrong order
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
        
        
    }
    // Print the sorted array
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n");

    //for ascending
    for ( i = 0; i < 4; i++)
    {
        for ( j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
        
        
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;
}
