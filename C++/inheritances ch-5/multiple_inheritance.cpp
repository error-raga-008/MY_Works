// multiple inheritance
//  [Class 1]    [Class 2]
//      \         /
//       \       /
//       [Class 3]


#include <iostream>

using namespace std;

class A{
    private:int a;
    public:
    void in(){
        cout<<"Enter A ";
        cin>>a;
    }
    void out(){
        cout<<"A is "<<a<<endl;
    }
};

class B{
    private:int b;
    public:
    void in(){
        cout<<"Enter B ";
        cin>>b;
    }
    void out(){
        cout<<"B is "<<b<<endl;
    }
};

class C: public A,public B{
    private:int c;
    public:
    void in(){
        A::in();
        B::in();
        cout<<"Enter C ";
        cin>>c;
    }
    void out(){
        A::out();
        B::out();
        cout<<"C is "<<c<<endl;
    }
};

int main(int argc, char const *argv[])
{
    C obj;
    obj.in();
    obj.out();
    return 0;
}
