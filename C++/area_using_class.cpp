#include <iostream>

using namespace std;

class cirlce
{
private: float r;
public:
    void in(){
        cout<<"enter radius ";
        cin>>r;
    }
    void out(){
        cout<<"\nradius is "<<r;
    }
    void area(){
        cout<<"\nradius of the circle is "<< 3.14*r;
    }
    void cricum(){
        cout<<"\ncircum of the circle is "<<2*3.14*r<<"\n\n";
    }
};

class room
{
private:
    int l,b,h;
public:
    void in(){
        cout<<"\nEnter Length ";
        cin>>l;
        cout<<"Enter Breath ";
        cin>>b;
        cout<<"Enter Height ";
        cin>>h;

        cout<<"\n The lenght is "<<l;
        cout<<"\n The breath is "<<b;
        cout<<"\n The heihgt is "<<h;
    }
    void area(){
        cout<<"\n The area is "<<l*b;
    }
    void vol(){
        cout<<"\n The volume is "<<l*b*h;
    }
};

int main(int argc, char const *argv[])
{
    cirlce a;
    
    a.in();
    a.out();
    a.area();
    a.cricum();

    room x;
    x.in();
    x.area();
    x.vol();

    return 0;
}
