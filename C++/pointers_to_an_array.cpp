// pointer to an arrey...

#include<iostream>

using namespace std;

int main()
{
    int size;
    int a[20];
    cout<<"enter size";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter element";
        cin>>a[i];
    }

    //pointer pointing to an entire array

    int*p = a;

    //loop through the array using pointer

    for (int i = 0; i < size; i++)
    {
        //accessing elements using pointer arithmetic
        cout<<*(p+i)<<" ";
    }
    
    
}