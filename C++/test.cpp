#include <iostream>

using namespace std;

class box{
    private: int x,y,z;
    static int count;

    public: 

    void in(){

        cout<<"Enter X axis"<<endl;
        cin>>x;

        cout<<"Enter Y axis"<<endl;
        cin>>y;

        cout<<"Enter Z axis"<<endl;
        cin>>z;

        count++;

        out();

    }

    void out(){
        cout<<"X axis is "<<x<<endl;
        cout<<"Y axis is "<<y<<endl;
        cout<<"Z axis is "<<z<<endl;
        cout<<"count is "<<count<<endl;
    }
};

int box::count = 0;

int main(int argc, char const *argv[])
{
    box a,b,c;

    a.in();
    b.in();
    c.in();
    return 0;
}
