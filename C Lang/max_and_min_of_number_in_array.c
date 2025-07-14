#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};
    int max = a[0], min = a[0]; // Initialize variables to store the maximum and minimum values
    int i;

    for ( i = 1; i < 5; i++) // Iterate through the array from the second element to the last
    {
        if (max < a[i]) // Check if the current element is greater than the current maximum
        {
            max = a[i]; // Update the maximum value if its not the max
        }
        if (min > a[i]) // Check if the current element is less than the current minimum
        {
            min = a[i];  // Update the minimum value if its not the minimum
        }
    }

    printf ("max num is  %d\n", max);
    printf ("max num is  %d", min);
    

    return 0;
}