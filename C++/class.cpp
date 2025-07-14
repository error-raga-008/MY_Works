#include <iostream>
using namespace std;

class stud{
    private: int x;

    public: void in(){
        cout<<"Enter your num ";
        cin>>x;
    }

    void out(){
        cout<<"num is "<<x;
    }
};

int main(int argc, char const *argv[])
{
    stud a;

    a.in();

    a.out();

    return 0;
}
