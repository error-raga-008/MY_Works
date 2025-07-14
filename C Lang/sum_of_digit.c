#include <stdio.h>
 
int main()
{
   // Declaring variable names    
   int ch, sum, x;
   char num[1000];
   
   // Take number input from the user
   printf("Enter a number\n");
   scanf("%s", num);
 
   sum = ch = 0;
  
   // Loop using a while statement
   while (num[ch] != '\0') {
       
      // Convert character input into an integer 
      x  = num[ch] - '0'; 
      sum = sum + x;
      
      // Increment of character input
      ch++;
   }
 
   printf("Sum of digits of %s = %d\n", num, sum);
   return 0;
}