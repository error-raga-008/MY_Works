#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 6;
    int b = (a+1,a-2,a+5); //(value of var b will be 10) it will do sequencialy operation in the order mentioned in the brakects 
    cout<<"value of b is "<<b;
    return 0;
}
