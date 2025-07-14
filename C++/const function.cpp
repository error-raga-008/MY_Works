//Constatnt function is a function that is declared as constant with the help of const keyword. 
//The object of constant function can not be modified.

#include <iostream>

using namespace std;

class student
{
private:
    int a;
    char n[20];
public:
    void in()
    {
        cout << "Enter Your Name" << endl;
        cin >> n;
        cout << "Enter Your Age" << endl;
        cin >> a;
        out();
    }

    void out ()
    {
        cout << "Your name is " << n << endl;
        cout << "Your age is " << a << endl;
    }

    const void inc()  //constant function declaration 
    {
        a++; //when we try any operation in constant function, it will show an error
        cout << a;
    }
};

int main(int argc, char const *argv[])
{
    student x;
    x.in();
    x.inc();
    return 0;
}
