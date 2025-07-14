#include <iostream>

using namespace std; //standard name base
namespace first{ int x = 1;}
namespace second{int y = 2;}
namespace third{int x = 3;}

int main(int argc, char const *argv[])
{
    cout<<first::x<<endl; //endl works as \n
    cout<<"This is the second number"<<second::y<<endl;
    cout<<"This is the second number"<<second::y+1<<endl;   // we can also use them for arthematic operations
    cout<<"This is the second number"<<third::x<<endl; // we can use same var name multiple time with diffrent name space
    return 0;
}
