#include <iostream>

using namespace std;

class test
{
private:
    int a, b;
public:
    void in(){
        cout << "Enter the value of a and b: ";
        cin >> a >> b;
    }
    void out(){
        cout << "The value of a and b is: " << a << " " << b << endl;
    }
    void sum(test t1, test t2){
        a = t1.a + t2.a; // t1.a and t2.a are the values of a of t1 and t2 respectively
        b = t1.b + t2.b; // t1.b and t2.b are the values of b of t1 and t2 respectively
        cout << "The sum of a and b from t1 and t2 is: " << a << " " << b << endl;
    }
};

int main()
{
    test t1, t2, t3; // t1, t2 and t3 are objects of class test and there data type is test
    t1.in(); // calling the in function to take the input for t1
    cout << "t1 is ";
    t1.out();
    t2.in(); // calling the in function to take the input for t2
    cout << "t2 is "; 
    t2.out();
    t3.sum(t1, t2); // t3 = t1 + t2 here we are adding the values of t1 and t2 and storing it in t3 
    //t3.out();
    return 0;
}