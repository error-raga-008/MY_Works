//class student with data member enrolment,name another subclass student marks with data member marks 
//and another class named student hobbies with datamember hobby as a string make this in multlevel inheritance

#include <iostream>

using namespace std;

class student{
    int id;
    string name;
    public:
        void s_in(){
            cout<<"Enter your id ";
            cin>>id;
            cout<<"Enter your name ";
            cin>>name;
        }

        void s_out(){
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
        }
};

class marks:public student{
    int m;
    public:
        void m_in(){
            cout<<"Enter your makrs ";
            cin>>m;
        }
        void m_out(){
            cout<<"Marks: "<<m<<endl;
        }
};

class hobby:public marks{
    string h;
    public:
        void h_in(){
            cout<<"Enter your hobby ";
            cin>>h;
        }

        void h_out(){
            cout<<"Hooby: "<<h<<endl;
        }


};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
