//To return arrays form functions, we need to return a pointer to pass the address of the array betwen the functions.

#include <iostream>
using namespace std;

//function to return an array
int *createarray(int size)
{
    //dynamically creating an array
    int *a = new int[size]; //here *a is a pointer declaring to a variable of size 'size'
    //the "new" keyword is used to allocate memory at runtime
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element: ";
        cin>>a[i];
    }
    return a;
}

int main()
{
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    //getting the array from the function into this variable declared as array using pointer
    int *arr = createarray(size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}