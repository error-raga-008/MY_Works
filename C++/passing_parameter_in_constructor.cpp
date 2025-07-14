#include <iostream>

using namespace std;

class A{
    int a;

    public:
        A(int a){
            this->a = a;
        }
        
        void out(){
            cout<<"The value of a is "<<a<<endl;
        }
};

class B:public A{
    int b;

    public:
        B(int a,int b):A(a){
            this->b =b;
        }

        void out(){
            A::out();
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(int argc, char const *argv[])
{
    B b(1,2);
    b.out();
    return 0;
}
