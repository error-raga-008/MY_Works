//create a class with no data members and define functions with the same name but different number of arguments one with two arguments 
//and other with three & four arguments to do addtion and multiplication and call them in main function.
#include <iostream>

using namespace std;

// fuction overloading is a feature in c++ where two or more functions can have the same name but different parameters.
// function overloading can be considered as an example of polymorphism feature in c++.

class dude{
    public:

    int add(int x,int y){
        return x+y;
    }
    int multi(int x,int y){
        return x*y;
    }

    int add(int x,int y,int z){
        return x+y+z;
    }
    int multi(int x,int y,int z){
        return x*y*z;
    }

    int add(int x,int y,int z,int oz){
        return x+y+z+oz;
    }
    int multi(int x,int y,int z,int oz){
        return x*y*z*oz;
    }

};

int main(int argc, char const *argv[])
{
    int a,b,c = 5,d = 10;

    dude k;

    cout<<"enter two digits\n";
    cin>>a>>b;

    cout<<"The addtion of 2 digit is "<<k.add(a,b)<<" and multi is "<<k.multi(a,b)<<endl<<endl;
    cout<<"The addtion of 3 digit is "<<k.add(a,b,c)<<" and multi is "<<k.multi(a,b,c)<<endl<<endl;
    cout<<"The addtion of 4 digit is "<<k.add(a,b,c,d)<<" and multi is "<<k.multi(a,b,c,d)<<endl<<endl;

    return 0;
}
