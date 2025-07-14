#include <iostream>

using namespace std;

//Object slicing is a situation where a derived class object is assigned to a base class object,
//resulting in the loss of all the derived class's member variables.
//This is because the base class object does not have the capacity to hold all the derived class's member variables.
//This is a common problem in C++ programming, and it can be avoided by using pointers or references to the base class object.

class A{
    int a;
    public:
    void in(){
        cout<<"a"<<a;
        cin>>a;
    }
    void out(){

        cout<<"a is "<<a<<endl;
    }
};

class B:public A{
    int b;
    public:
    void in(){
        cout<<"b"<<b;
        cin>>b;
    }
    void out(){
        cout<<"b is "<<b<<endl;
    }
};

int main(){
    A a;
    B b;

    a.in();
    a.out();

    b.in();
    b.out();
    
    a=b; //Object slicing occurs here
    a.out(); //here a is object of class A and it does not have b variable so it will print garbage value
    b.out();
    return 0;
}