//create a program which will take 3 num from user and print max of these 3 using the concept of default argument
#include <iostream>

using namespace std;

void check(int a, int b = 0, int c = 0){ //here we are assigning the value of var before hand so if we dont value of a var user it would still work
    if (a > b && a >c)
    {
        cout<<"a is max";
    }
    else if (b > a && b >c)
    {
        cout<<"b is max";
    }
    else
    {
        cout<<"c is max";
    }
    
}

int main(int argc, char const *argv[])
{
    int x=1,y=2,z=3;

    
    check(x);
    return 0;
}

