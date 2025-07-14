#include <iostream>

using namespace std;

class stud{
    public: 
    
    stud(){
        cout<<"this is a construcor"<<endl;
    }

    ~stud(){//destructor is used to unallocate memory whenver its called
        cout<<"This is a destructor";
    }
};

int main(int argc, char const *argv[])
{
    stud s;
    return 0;
}
