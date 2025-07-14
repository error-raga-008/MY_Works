//cr a class student with data members roll no name and marks of 3 sub take data from user and print avg marks of student


//imp array of object
//class university with data member u_id,u_name and no. of department. 
//take number of depatment as a array and store number of teacher in that department as array of array
//take in and out
#include<iostream>

using namespace std;

class student
{
    private:
    int rollno;
    string name;
    int marks[3];
    public:
    void getdata();
    void tot_marks();
};

    void student::getdata()
    {
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks of 3 subjects: ";
        for(int i=0;i<3;i++)
        {
            cin>>marks[i];
        }
        //cout<<marks[i];
    }

    void student::tot_marks()
    {
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks of 3 subjects: ";
        int total=0;
        for(int i=0;i<3;i++)
        total+=marks[i];
        cout<<"Total marks: "<<total/3<<endl;
    }

    int main()
    {
        student s;
        s.getdata();
        s.tot_marks();
        return 0;
    }