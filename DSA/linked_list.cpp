#include <iostream>
using namespace std;

//-> (arrow operator) Used to access members of a class/struct through a pointer


class node{
    public:
        int data;
        node *next; //next stores the address of the next node in the linked list.
};

node *start = NULL; //inzalise the value of start and rear as NULL
node *rear = NULL;

node* create_ll(node *start){
    int num = 0;

    while (num != -1)
    {
        cout<<"Enter num: ";
        cin>>num;

        node *new_node = new node(); //new_node is a pointer to a node It contains the address of the newly created node
            //new_node is a object pointer to the node class
        new_node -> data = num;

        if (start == NULL)
        {
            new_node -> next = NULL; //next is a pointer variable inside the node class
            start = new_node; //assign the new node start and rear as at it is the first and only element in the list
            rear = new_node;
        }
        else
        {
            rear -> next = new_node; //we use rear cuase it points towards the last node and This line makes the last node point to the new node
            new_node->next = NULL; //this says that i new_node obj of node class the value of next will be set to null as there will be no new element in out current config
            rear = new_node;//Update rear so it points to the new last node
        }
    }
    return start;
}

void display(node *start){
    node *ptr = start; //we made a pointer obj of node class that that starts from the first node of the linked list as start represent the head or the first element of the list 

    if (start == NULL)
    {
        cout<<"Empty";
    }
    else
    {
        while (ptr -> next != NULL) //we use ptr as its a pointer we are using to go through the list and we use next beacuse it points toward the next address of the list and so finally this line means go througrh the list untill we hit NULL in the place of next as it will be in the last element of the list
        {
            cout<<ptr -> data<<" "; //printing the data of the current node
            ptr = ptr ->next; //moves ptr to the next node
            //Each node stores the address of the next node in its next pointer, so ptr = ptr->next moves the pointer to the next node
        }
    }
}

int main(int argc, char const *argv[])
{
    start = create_ll(start);
    
    cout << "Linked List: ";
    display(start);

    return 0;
}

