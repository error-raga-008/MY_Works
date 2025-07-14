#include <iostream>

using namespace std;
//pure virtual function is a function which is declared in the base class but not defined
//it is used to make the class abstract
//abstract class is a class which has atleast one pure virtual function
//absract class 

class test{
    public: 
        virtual void out() = 0; //this is pure virtual function
};

class test_2:public test{
    public:
        void out(){ //name of the function has to be same as the virtual function
            cout<<"Display "<<endl;
        }
};

int main(int argc, char const *argv[])
{
    test_2 t;

    t.out();

    return 0;
} 