#include <iostream>

#include <cmath>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{   //cmath
    int a,b,c;

    cout<<"Enter 3 values: ";
    cin>>a>>b>>c;

    cout<<"sqrt of a is "<<sqrt(a)<<endl; //square root
    cout<<"Min is "<<min(a,c)<<endl; //minimum
    cout<<"max is "<<max(a,b)<<endl; //maximum
    cout<<"pow is "<<pow(a,b)<<endl; //power
    cout<<"ceil is "<<ceil(a)<<endl; //round up
 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  
 //cstring

 char s[10];
    char x[10];

    cout<<"Enter the first string ";
    cin>>s;

    //cout<<"The first string lenght is "<<s.length()<<endl; //only works with string var


    cout<<"Enter the second string ";
    cin>>x;

    //cout<<"The second string lenght is "<<strlen(c)<<endl; // only works with char var

    //strcpy(s,c); //sting copy function

    cout<<"First string is "<<s<<endl<<"Second string is "<<x<<endl;

    //strcat(s,c); //string Concate or merging
    
    //cout<<"Concated string is "<<endl<<s;

    if (strcmp(s,x) == 0)
    {
        cout<<"Strings are same";
    }
    else if(strcmp(s,x) > 0){
        cout<<"String first is bigger";
    }
    else if(strcmp(s,x) < 0){
        cout<<"String sec is bigger";
    }

    return 0;
}
