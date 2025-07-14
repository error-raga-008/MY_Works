#include <iostream>

using namespace std;

class sphere
{
private:
    static float radius;
    static int count;

public:
    static void in(){ // static member function is declared in the class and defined outside the class using scope resolution operator :: and class name
        cout << "Enter the radius of the sphere: ";
        cin >> radius;
        count++;
        out();
    }

    //static function will only take and works with static member variables

    static void out(){
        cout << "The Volume of the sphere is: " << 1.33*3.14*radius*radius*radius << endl;
        cout << "The number of spheres are: " << count << endl;
    }
};

float sphere::radius = 0; // static member variable is defined outside the class using scope resolution operator :: and class name
int sphere::count = 0;

int main()
{
    
    sphere::in();
    sphere::in();
    sphere::in();
    return 0;
}