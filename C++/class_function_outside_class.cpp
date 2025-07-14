#include <iostream>

using namespace std;

class add{
    private:int x,y;
    public:

    void in();
    void out();
};

void add::in(){
    cout<<"Enter two number "<<endl;
    cin>>x>>y;
}

void add::out(){
    cout<<"addtion of x and y is "<<x+y;
}

int main(int argc, char const *argv[])
{
    add a;
    a.in();
    a.out();
    return 0;
}
