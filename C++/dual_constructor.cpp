//Dual Constructor is a constructor that takes another object of the same class as an argument.
//It is used to copy the values of data members of one object to another object.

#include<iostream>
using namespace std;

class test{
    public:
    //type 1
    test(){
        cout<<"This is the default Constructor"<<endl;
    }
    //type 2
    test(int a){
        cout<<"This is the parameterized Constructor"<<a<<endl;
    }
};

int main(){
    //type 1
    test t1;
    //type 2
    test t2(10);
    return 0;
}