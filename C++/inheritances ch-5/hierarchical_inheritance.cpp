#include <iostream>
//        [Class 1]
//            |
//   ---------------------
//   |         |         |
//[Class 2]  [Class 3]  [Class 4]

using namespace std;

class A{
    public:
    int a;
    void in(){
        cout<<"Enter a ";
        cin>>a;
        
    }
    
    void out()
    {
        cout<<"a is "<<a<<endl;
    }
};

class B:public A{
    int b;

    public:
    void in(){
        A::in();
        cout<<"Enter b ";
        cin>>b;
    }

    void out(){
        cout<<"a + b is "<<A::a+b<<endl;
    }
};

class C:public A{
    int c;

    public:
    void in(){
        A::in();
        cout<<"Enter c ";
        cin>>c;
    }

    void out(){
        cout<<"a + c is "<<A::a+c<<endl;
    }
};


class D:public A{
    int d;

    public:
    void in(){
        A::in();
        cout<<"Enter d ";
        cin>>d;
        // cout<<A::a<<endl;
    }

    void out(){
        cout<<"a + d is "<<A::a+d<<endl;
    }
};

int main(int argc, char const *argv[])
{
    A a;
    B b;
    C c;
    D d;

    // a.in();
    b.in();
    c.in();
    d.in();

    // a.out();
    b.out();
    c.out();
    d.out();

    
    return 0;
}


//class person with data member adhar num,name crearte another 3 class as student with data member rollno,
//sec class facultiy with data mmeber as registration number
//3rd class as lab person with datamembers as admin id  

