#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j,k;

    // Break statement
    /*It exits when condtion is true and donot execute rest of the code*/
    for (i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break;
        }
        printf("i = %d\n", i);
    }
    
    // Continue statement
    /*It skips the current line when the condtion is true and continue with the next line */
    for (j = 0; j < 5; j++)
    {
        if (j == 3)
        {
            continue;
        }
        printf("j = %d\n", j);
    }

    // Goto statement
    /*It is used to jump to the specified label*/
    printf("Enter the value of k: ");
    scanf("%d", &k);
    if (k%2 == 2)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even: //this is the label
        printf("The value of k is even\n");
        goto end; //its neded or it will also execute the next line of odd
    odd:
        printf("The value of k is odd\n");
        goto end;
    end:
        printf("End of the program\n");


    // Return statement
    /*It is used to return the value from the function*/
    return 0;
}
