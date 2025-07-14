// single inheritance
//  [Class A]
//      |
//      |
//   [Class B]
#include <iostream>

using namespace std;

class parent{ //this is the parent class 
    int rno;
    public:
        void in(){
            cout<<"Enter your rno   ";
            cin>>rno;
        }
        void out(){
            cout<<rno<<endl;
        }
};

class child:public parent{ //making the parent class be accesible to the child class
    double fee;
    public:
        void in(){
        parent::in();   //using parent class functions with class::function
        cout<<"Enter the fee ";
        cin>>fee;
    }

    void out(){
        parent::out();
        cout<<fee<<endl;
    }

};

int main(int argc, char const *argv[])
{
    child c; 
    c.in();
    c.out();
    return 0;
}
