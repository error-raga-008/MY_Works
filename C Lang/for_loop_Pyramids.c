#include <stdio.h>

int main()
{
    int i, j, k;


    for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d ", k++);
        }
        printf("\n");
    }

    return 0;
}


/*

For print "i"
we get the output as:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5


For print "j"
we get the output as:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


For print "k++"
we get the output as:
0
1 2
3 4 5
6 7 8 9
10 11 12 13 14


for "for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            printf(" %d ", i);"

we get the output as:
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5


for "for(i=1; i<=5; i++)
    {
        for(j=5; j>=i; j--)
        {
            printf(" %d ", j);"

we get the output as:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5


for " for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d ", j);"

we get the output as:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


for " for(i=5; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf(" %d ", i);"

we get the output as:
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1

for "for ( i = 0; i <= 5; i++)
    {
        for ( j = 0; j <= 5; j++)
        {
            if (j <= 5 - i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }"
we get the output as':
     *
    **
   ***
  ****
 *****

    
*/