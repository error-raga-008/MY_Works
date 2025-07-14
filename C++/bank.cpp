#include <iostream>

using namespace std;

class bank
{
private:
    int a,b = 69000,c,d,e;
public:
    void in(){
        cout<<"Enter Your account numb ";
        cin>>a;
        out();
    }
    void out(){
        if (a == 1234)
        {
            cout<<"\nWelcome \nYour account balance is $"<<b;
            check();
        }
        else
        {
            cout<<"Invalid Thing";
        }
        
    }  
    void check(){
        cout<<"\nEnter What Operation you want to do";
        cout<<"\n1. Withdraw";
        cout<<"\n2. Deposit\n\n";
        cin>>c;
        if (c == 1)
        {
            with();
        }
        else if (c == 2)
        {
            depo();
        }
        else
        {
            cout<<"Invalid Thing";
        }
        
        
    }
    void with(){
        cout<<"\nEnter the amount you want to Withdraw ";
        cin>>d;
        cout<<"\nWithdraw Completed!!\n Your Current balance is "<<b-d;
    }
    void depo(){
        cout<<"\nEnter the amount you want to Deposit ";
        cin>>d;
        cout<<"\nDeposit Completed!!\n Your Current balance is "<<b+d;
    }
    
};

int main(int argc, char const *argv[])
{
    bank x;

    x.in();

    return 0;
}
