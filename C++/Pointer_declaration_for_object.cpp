#include <iostream>

using namespace std;

class men{
    public:
    void out(int a,string b){
    cout<<"Yap this is now my ducking life"<<endl;
    cout<<a<<b;
    }
};

int main(int argc, char const *argv[])
{
    men *me = new men; //Dynamic memory allocation: A pointer me is created, and memory is allocated for an object of class men using new.
    //me now holds the address of the dynamically created object.

    int a;
    string b;

    cin>>a>>b;

    me -> out(a,b); //The arrow operator (->) is used to call the out() function from the dynamically allocated object.

    delete me; //Memory cleanup: Since me was allocated using new, it must be freed using delete to avoid memory leaks.
    return 0;
}
