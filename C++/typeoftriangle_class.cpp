#include <iostream>

using namespace std;

class trii
{
private:
    int a,b,c;
public:
    void in(){
        cout<<"Enter 1st side ";
        cin>>a;
        cout<<"Enter 2nd side ";
        cin>>b;
        cout<<"Enter 3rd side ";
        cin>>c;
    }

    void check(){
        if (a == b && b == c && c == a)
        {
           cout<<"Equilateral ";
        }
        else if (a == b || b == c || c == a)
        {
            cout<<"Lateral";
        }
        else
        {
            cout<<"Norm";
        }
        
    }
};

int main(int argc, char const *argv[])
{
    trii x;

    x.in();
    x.check();
    return 0;
}
