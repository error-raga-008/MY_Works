//Constructor is type of function and it is called automaticlay when object is created.
//Constructor name and class name is same. 
// They Donot have a return type.

#include<iostream>
using namespace std;

class outo{
    public:
    outo(){
        cout<<"Constructor is called"<<endl;
    }
};

int main(){
    outo o;
    return 0;
}