#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the value of a[" << i << "] : ";
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<" value of a("<<i<<") is : " <<a[i]<<"\n";
    }

    return 0;
}
