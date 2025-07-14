//Dynamic memory allocation refer to proccess of allocating memeory at runtime using pointer
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *p;
    p = new int;

    cout<<"Enter a value ";
    cin>>*p;
    cout<<*p;

    //for a array 


    int n;
    int*x;
    cout<<"ENTER N ";
    cin>>n;

    x = new int[n+1];

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value ";
        cin>>x[i];
    }

    cout<<"Entered Values are ";
    
    for (int i = 0; i < n; i++)
    {
        cout<<x[i]<<endl;
    }
    
    
    return 0;
}
