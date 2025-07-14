#include <iostream>

using namespace std;

class abc
{
private: int x,y,z;
    
public:
    // inline function is used to reduce the function call overhead and increase the execution time of the program.
    //its define in class so it is inline function
    inline void in(){ 
        cout<<"Enter two var\n";
        cin>>x>>y;

        add(x,y);
    }
    
    inline void add(int x,int y){ 
        cout<<"addition of two digit is "<<x+y;
    }

};

int main(int argc, char const *argv[])
{
    abc k;

    k.in();

    return 0;
}
