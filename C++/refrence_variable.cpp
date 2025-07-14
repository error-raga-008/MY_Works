//refrence variable is the second name of the same variable

#include <iostream>
using namespace std;

void func(int &a)
{
    a++;
}

int main(int argc, char const *argv[])
{
    int x = 20;
    int *a = &x; //pointer variable
    int &b = x;  //refrence variable

    int h = 1;
    func(h);
    cout << h << endl;
    return 0;
}
