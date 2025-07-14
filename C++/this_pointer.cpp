//The this pointer in C++ is an implicit pointer available in all non-static member functions of a class.
//It points to the current instance of the class, allowing access to its members.

#include <iostream>
using namespace std;

class Demo {
    int num;

public:
    Demo(int num) {
        this->num = num; // Using `this` to refer to the member variable
    }

    void show() {
        cout << "Number: " << this->num << endl;
    }
};

int main() {
    Demo obj(5);
    obj.show(); // Output: Number: 5
    return 0;
}
