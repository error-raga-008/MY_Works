#include <iostream>
using namespace std;

int que[5];
int maxe = 5;
int front = -1,rear = -1;

void enqueue(){
    int num;

    cout<<"Enter num";
    cin>>num;

    if (rear == maxe-1)
    {
        cout<<"Que overflow";
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = rear = 0;
            que[rear] = num;
        }
        else
        {
            rear++;
            que[rear] = num;
        }
           
    }   
    
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow";
    } else {
        cout << "Removed item is " << que[front];
        front++;
        if (front > rear) {
            front = rear = -1;
        }
    }
}

void peek() {
    if (front == -1)
        cout << "Queue is empty";
    else
        cout << "Value at front is " << que[front];
}


void display(){
    
    if (front == -1)
    {
        cout<<"que underflow";
    }
    else
    {
        for (int i = front; i < rear; i++)
        {
            cout<<que[i]<<" ";
        }        
    }
}

int main(int argc, char const *argv[])
{
    int a = 1;
    int x;
    while (a == 1)
    {
        cout<<endl<<endl<<"1.enq"<<endl<<"2.deq"<<endl<<"3.peek"<<endl<<"4.display"<<endl<<"5.exit"<<endl<<"Enter ur choice"<<endl;
        cin>>x;
        cout<<endl;

        switch (x)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            a = 0;
            break;
        default:
            cout<<"Enter valid shit";
            break;
        }
    }

        
    return 0;
}
