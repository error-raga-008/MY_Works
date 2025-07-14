#include <iostream>
//Create a student class with roll,name,and a nested class dob with 3 data member d,m,y

using namespace std;

class A{

    private: int r;
             char n[20];
    
    public:
    
     void in(){
            cout<<"Enter your name"<<endl;
            cin>>n;
            cout<<"Enter your roll number"<<endl;
            cin>>r;
        }

    void out(){
        cout<<"Your Name is "<<n<<" and Roll Number is "<<r<<endl;
    }

    class B
    {
        private: int d,m,y;

        public:
            void in(){
                cout<<"Enter Your DOB"<<endl;
                cout<<"Enter Date"<<endl;
                cin>>d;
                cout<<"Enter Month"<<endl;
                cin>>m;
                cout<<"Enter Your Year"<<endl;
                cin>>y;
            }

            void out(){
                cout<<endl<<"Your DOB is "<<d<<"/"<<m<<"/"<<y<<endl;
            }
            
    
        
    };
};

int main(int argc, char const *argv[])
{
    A a;
    A::B b;

    a.in();
    b.in();
    a.out();
    b.out();

    return 0;
}
  