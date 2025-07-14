//Friend function are not member function of a class but are defined in the class. They have access to all the members of the class.
//They are used to access the private members of the class.
//They are defined using the keyword friend.
//They are not in the scope of the class.
//They are called like normal functions.
//They can be declared inside the class or outside the class.
//They can be declared in the private or public section of the class.
//They cannot access the members directly by their names and need object_name.member_name to access any member.
//They can be declared in the private or public section of the class.

#include <iostream>

using namespace std;

class name{
    private:int n,a;

    public:
        void in(){
            cout<<"Enter your ID "<<endl;
            cin>>n;
            cout<<"Enter Your age "<<endl;
            cin>>a;
        }

    friend void out(name x);
};

void out(name x){
    cout<<"Your ID is "<<x.a<<" and your age is "<<x.n;
}


int main(int argc, char const *argv[])
{
    name m;

    m.in();
    out(m);
    return 0;
}
