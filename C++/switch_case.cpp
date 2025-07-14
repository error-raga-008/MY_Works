#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    cout << "Enter the month number : ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout<<"jan";
        break; 
    case 2:
        cout<<"feb";
        break;
    case 3:
        cout<<"march";
        break;
    case 4:
        cout<<"april";
        break;
    case 5:
        cout<<"may";
        break;
    case 6:
        cout<<"june";
        break;
    case 7:
        cout<<"july";
        break;
    case 8:
        cout<<"agust";
        break;
    
    default:
        break;
    }


    return 0;
}
