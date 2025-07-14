//two class can be connected together using friend keyword

#include <iostream>

using namespace std;

class name{
    private:char n[20];

    public:
        void in(){
            cout<<"Enter Your name "<<endl;
            cin>>n;
        }

        friend class age;
};

class age
{
    private:
        int a;
    public:
        void in(){
            cout<<"Enter Your age "<<endl;
            cin>>a;
        }

        void out(name x){
            cout<<"Your name is "<<x.n<<" and your age is "<<a<<endl;
        }
};

int main(int argc, char const *argv[])
{
    name b;
    age a;

    b.in();
    a.in();
    a.out(b);
    
    return 0;
}
