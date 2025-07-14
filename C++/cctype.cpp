#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch;

    cin>>ch;

    if (isalpha(ch))
    {
        cout<<"Its all alphabets ";
    }
    else if (isalnum(ch))
    {
        cout<<"Its all alphanumeric ";
    }
    else if (isdigit(ch))
    {
        cout<<"Its all digits ";
    }
    else if (islower(ch))
    {
        cout<<"Its all lowercase ";
    }
    else if (isupper(ch))
    {
        cout<<"Its all uppercase ";
    }
    else
    {
        cout<<"why i even exits";
    }
    
    //converting uppercase to smallcase

    cout<<"Upper case is "<<ch<<endl;
    ch = tolower(ch);
    cout<<"Lower case is "<<ch<<endl;

    return 0;
}
