// Multilevel Inheritance
// In multilevel inheritance, a class is derived from another derived class.
//   [Class 1]
//      |
//      |
//   [Class 2]
//       |      
//       |      
//   [Class 3]

#include <iostream>

using namespace std;

class grandparent{ //this is a grand parent class 
    int a;
    public:
        void ain(){
            cout<<"Enter your a no   ";
            cin>>a;
        }
        void aout(){
            cout<<a<<endl;
        }
};

class parent:public grandparent{ //this is the parent class 
    int b;
    public:
        void bin(){
            cout<<"Enter your  b no   ";
            cin>>b;
        }
        void bout(){
            cout<<b<<endl;
        }
};

class child:public parent{ //making the parent class be accesible to the child class
    int c;
    public:
        void c_in(){
            ain();
            bin();
            cout<<"Enter your c no   ";
            cin>>c;
        }
        void c_out(){
            aout(); //child class can access the elements of the grand parent class 
            bout();
            cout<<c<<endl;
        }

};

int main(int argc, char const *argv[])
{
    child c; 

    c.c_in();
    c.c_out();

    return 0;
}
