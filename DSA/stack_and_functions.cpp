#include <iostream>

using namespace std;

int stack[5],n = 5;
int top = -1;

void push(){

    if (top >= n-1)
    {
        cout<<"stack overflow";
    }
    else
    {   
        int item;
        cout<<endl<<"Enter the number ";
        cin>>item;
        top++;
        stack[top] = item;
    }

}

void pop(){

    if (top <= -1)
    {
        cout<<"stack underflow";
    }
    else
    {   
        cout<<"Poped item is "<<stack[top];
        top--;
    }

}

void peek(){

    if (top <= -1)
    {
        cout<<"stack underflow";
    }
    else
    {   
        cout<<"peeked item is "<<stack[top];
    }

}

void display(){

    if (top >= 0)
    {
        for (int i = 0; i <= top; i++)
        {
            cout<<stack[i]<<endl;
        }
        
    }
    else
    {
        cout<<"stack is empty";
    }
    

}

int main(int argc, char const *argv[])
{
    int x = 1,y=0;
    
    while (x ==1)
    {
        cout<<endl<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Peek"<<endl;
        cout<<"4.Display"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter ur choice"<<endl;
        cin>>y;
        
        if (y == 1)
        {
            push();
        }
        else if (y == 2)
        {
            pop();
        }
        else if (y == 3)
        {
            peek();
        }
        else if (y == 4)
        {
            display();
        }
        else if (y == 5)
        {
            break;
        }
        else
        {
            cout<<"Enter some good shit";
        } 

    }
    

    return 0;
}

