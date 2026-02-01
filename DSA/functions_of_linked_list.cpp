#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

node *start = NULL;
node *rear = NULL;

node *create_node(node *start){
    
    int num = 0;

    while (num != -1)
    {
        cout<<"Enter num to enter";
        cin>>num;

        node *n_node = new node();
        n_node -> data = num;

        if (start == NULL)
        {
            n_node->next = NULL;
            start = n_node;
            rear = n_node;
    
        }
        else
        {
            rear -> next = n_node;
            n_node-> next = NULL;
            rear = n_node;
        }
        
    }

}

void display(node *start)
{
    node *ptr = start;

    if (start = NULL)
    {
        cout<<"Empty";
    }
    else
    {
        while (ptr -> next != NULL)
        {
            cout<<ptr -> data<<" ";
            ptr = ptr -> next; 
        }
        
    }
    
}

node *insert_beginning(node *start){

    node *n_node;

    int num; 

    cout<<"Enter data";
    cin>>num; //getting data to put in the new node

    n_node = new node(); //creating a obj of node class

    n_node->data = num; //setting data for new node 
    n_node->next = start; //setting next for new node the start as it will be the next node after this one become the new start
    
    start = n_node; //setting the new node to start

}

node *insert_end(node *start)
{
    node *n_node;

    int num; 

    cout<<"Enter data";
    cin>>num; //getting data to put in the new node

    n_node = new node(); //creating a obj of node class
    
    n_node -> data = num; //setting data for new node 
    n_node -> next = NULL; //setting next for new node NULL Because there is no node after this one
    
    rear -> next = n_node; //this make the prevouis last node point its next to the new node address that we created
    rear = n_node;  //assign the new node to the last

    return start;
}

int main(int argc, char const *argv[])
{
    int option;
    do
        {

        cout<<"1:create a list"<<endl;
        cout<<"2: Display list"<<endl;
        cout<<"3:Add a node in the beginning"<<endl;
        cout<<"4:Add a node at the end"<<endl;
        cout<<"5:Add a node after a given node"<<endl;cout<<"6:Delete node from the beginning"<<endl;
        cout<<"7:Delete node from the end"<<endl;
        cout<<"8:Delete a node after a given node"<<endl;
        cout<<"9:Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>option;

        switch(option)
        {

            //we set start eberytime we call a function because everyfucntions returns start
            //and this tells us where the linked list start and this is also the reason we
            //send the start function to every functions so it know the where the linked list start

            case 1:
            start = create_node(start);
            cout<<"LINKED LIST CREATED";
            break;

            case 2:
            display(start);
            break;

            case 3:
            start=insert_beginning(start);
            break;

            case 4:
            start = insert_end(start);
            break;

            // case 5:
            // start=insert_after(start);
            // break;

            // case 6:
            // start=delete_beg(start);
            // break;

            // case 7:
            // start=delete_end(start);
            // break;
            
            // case 8:
            // start=delete_after(start);
            // break;
        }
    }while(option !=9);

    return 0;
}

