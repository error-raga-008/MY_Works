#include <stdio.h>


int fact(int x) {
    if (x > 0)
    {
        return x*fact(x-1);
    }
    else{
        return 1;
    }
    
    
}


int main() {

  int x = 10;
  int result = fact(x);
  printf("\n result = %d", result);
return 0;
}