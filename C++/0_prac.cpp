#include <iostream>

using namespace std;

class laptop
{
private:
    int id,price;
    char name[20];
public:
    void in(){
        cout<<"Enter laptop id,price,name ";
        cin>>id>>price>>name;
        out();
    }

    void out(){
        cout<<"Laptop is "<<name<<" with id "<<id<<" and price "<<price<<endl;
    }
    //test 2
};

int main(int argc, char const *argv[])
{
    laptop l1,l2,l3;

    l1.in();
    l2.in();
    l3.in();
    return 0;
}
