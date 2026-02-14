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

	int num;
	
	while (true){

		cout<<"Enter the number and -1 to exit"<<endl;
		cin>>num;
		if (num == -1)
		{
			break;
		}
		else
		{
		
			node *new_node = new node();
			new_node -> data = num;

			if (start == NULL)
			{
				new_node -> next = NULL;
				start = new_node;
				rear = new_node;
			}
			else
			{
				rear -> next = new_node;
				new_node -> next = NULL;
				rear = new_node;
			}
		}
	}
	return start;
}

void display(node *start){
	node *ptr = start;

	if (start == NULL)
	{
		cout<<"helo";
	}
	else
	{
		while (ptr->next != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout<<ptr->data;
        
	}
}

node *insert_beginning(node *start){

    int num; 

    cout<<"Enter data";
    cin>>num; //getting data to put in the new node

    node *n_node = new node(); //creating a obj of node class

    n_node->data = num; //setting data for new node 
    n_node->next = start; //setting next for new node the start as it will be the next node after this one become the new start
    
    start = n_node; //setting the new node to start

    return start;

}

node *insert_end(node *start)
{

    int num; 

    cout<<"Enter data";
    cin>>num; //getting data to put in the new node

    node *n_node = new node(); //creating a obj of node class
    
    n_node -> data = num; //setting data for new node 
    n_node -> next = NULL; //setting next for new node NULL Because there is no node after this one
    
    rear -> next = n_node; //this make the prevouis last node point its next to the new node address that we created
    rear = n_node;  //assign the new node to the last

    return start;
}

node *insert_after_pos(node *start){

    node *ptr = start;
    node *preptr = start;

    int num;
    int postion;
    int count = 0;

    cout<<"Enter the data you want to enter after the postion of the given node";
    cin>>num;

    cout<<"Enter the postion after which u want to enter the data";
    cin>>postion;

    node *new_node = new node();
    new_node-> data = num;

    while (count != postion)
    {
        preptr = ptr;
        ptr = ptr->next;
        count++;
    }
    
    new_node -> next = ptr;
    preptr -> next = new_node;

    return start;

}

node *insert_after_val(node *start){

    node *new_node = new node();
    node *ptr = start;
    
    
    int val;
    cout<<"Enter the value after u want to enter the value";
    cin>>val;
    
    int num;
    cout<<"Enter the data u want to add";
    cin>>num;

    while (ptr->data != val && ptr->next != NULL)
    {
        ptr = ptr->next; 
    }
    
    new_node->data = num;
    new_node->next = ptr->next;
    ptr->next = new_node;

    return start;
}

node *delete_beg(node *start){

    node *ptr;

    ptr = start;
    start = start->next;
    free(ptr);

    return start;
    
}

node *delete_end(node *start){

    node *ptr = start;
    node *preptr = start;

    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }

    preptr->next = NULL;
    rear = preptr;
    free(ptr);

    return start;
    
}

node *delete_after(node *start){

    node *ptr = start;
    node *preptr = start;

    int postion;
    int count = 1;

    cout<<"Enter the postion after which u want to delete the data";
    cin>>postion;

    while (count < postion && ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
        count++;
    }

    preptr->next = ptr->next;
    free(ptr);

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
        cout<<"5:Add a node after a given node"<<endl;
        cout<<"6:Add a node after a given value"<<endl;
        cout<<"7:Delete node from the beginning"<<endl;
        cout<<"8:Delete node from the end"<<endl;
        cout<<"9:Delete a node after a given node"<<endl;
        cout<<"10:Exit"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>option;

        switch(option)
        {

            //we set start everytime we call a function because everyfucntions returns start
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

            case 5:
            start=insert_after_pos(start);
            break;

            case 6:
            start=insert_after_val(start);
            break;

            case 7:
            start=delete_beg(start);
            break;

            case 8:
            start=delete_end(start);
            break;
            
            case 9:
            start=delete_after(start);
            break;

        }
    }while(option != 10);

    return 0;
}


