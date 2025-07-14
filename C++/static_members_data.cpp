#include <iostream>

using namespace std;

class student
{
private:
    int roll_no;
    char name[20];
    static int count;

    // static member variable is shared by all the objects of the class and is declared using static keyword
    // static member variable is declared in the class and defined and its used outside the class

    // static array declaration is : 
    // char student::name[] = "";

public:

    void in(){
        cout << "Enter the name of the student: ";
        cin >> name;
        cout << "Enter the roll number of the student: ";
        cin >> roll_no;
        count++;
    }
    void out(){
        cout << "The name of the student is: " << name << endl;
        cout << "The roll number of the student is: " << roll_no << endl;
        cout << "The number of students are: " << count << endl;
    }
};

int student::count = 0; // static member variable is defined outside the class using scope resolution operator :: and class name

int main()
{
    student s1, s2, s3;
    s1.in();
    s1.out();
    s2.in();
    s2.out();
    s3.in();
    s3.out();
    return 0;
}