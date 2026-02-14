#include <iostream>

using namespace std;

class node{
    public:
        node *next;
        node *prev;
        int data;
};

node *start = NULL;
node *rear = NULL;

node *create_node(node *start){

    int num;

    while (true)
    {
        cout<<"Enter the data and -1 to stop ";
        cin>>num;

        if (num == -1)
        {
            break;
        }
        else
        {
            node *new_node = new node();

            if (start == NULL)
            {
                start = new_node;
                rear = new_node;
                new_node->data = num;
                new_node->next = NULL;
                new_node->prev = NULL;
            }
            else
            {
                new_node->prev = rear;
                rear->next = new_node;
                new_node->next = NULL;
                new_node->data = num;
                rear = new_node;
            }
            
            
        }
        
        
    }
    
    return start;
}

void display_normal(node *start){

    node *ptr;

    ptr = start;

    while (ptr->next != NULL) 
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }

    cout<<ptr->data<<" ";

}

void display_rev(node *start){

    node *ptr;

    ptr = rear;

    while (ptr->prev != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
    
    cout<<ptr->data<<" ";

}

node *inset_begging(node *start){
    
    node *new_node = new node();

    int num;    

    cout<<"Enter the data u want to add at the begging ";
    cin>>num;

    new_node->data=num;
    new_node->prev = NULL;
    new_node->next = start;

    start->prev = new_node;
    start = new_node;

    return start;

}

node *insert_end(node *start){

    node *new_node = new node();

    int num;
    cout<<"Enter the data u want to enter ";
    cin>>num;

    new_node->data = num;
    new_node->prev = rear;
    new_node->next = NULL;

    rear->next = new_node;
    rear = new_node;

    return start;

}

node *insert_posi(node *start){

    node *new_node = new node();

    int pos;
    cout<<"Enter the position u want to enter after ";
    cin>>pos;
    cout<<endl;

    int num;
    cout<<"Enter the data u want to enter ";
    cin>>num;

    int count = 1;

    node *ptr = start;

    while (count != pos && ptr->next != NULL)
    {
        ptr = ptr->next;
        count++;
    }

    new_node->data = num;
    new_node->next = ptr->next;
    new_node->prev = ptr;

    ptr->next->prev = new_node;
    ptr->next = new_node;

    return start;

}

node *insert_val(node *start){

    node *new_node = new node();

    int val;
    cout<<"Enter the val u want to enter after ";
    cin>>val;
    cout<<endl;

    int num;
    cout<<"Enter the data u want to enter ";
    cin>>num;
    
    node *ptr = start;

    while (ptr->data != val && ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    
    new_node->data = num;
    new_node->next = ptr->next;
    new_node->prev = ptr;

    ptr->next->prev = new_node;
    ptr->next = new_node;

    return start;

}

node *del_begging(node *start){

    node *ptr = start->next;
    node *temp = start;

    ptr->prev = NULL;
    start = ptr;

    free(temp);

    return start;

}

node *del_end(node *start){

    node *ptr = rear->prev;
    node *temp = rear;

    ptr->next = NULL;
    rear = ptr;

    free(temp);

    return start;

}

node *del_pos(node *start){

    node *ptr = start;
    int count = 1;

    int pos;
    cout<<"Enter the position u want to delete after ";
    cin>>pos;   


    while (count != pos && ptr->next != NULL)
    {
        ptr = ptr->next;
        count++;
    }

    node *temp = ptr->next;
    
    temp->next->prev = ptr;
    ptr->next = temp->next;

    free(temp);

    return start;
}

node *del_val(node *start){

    node *ptr = start;

    int val;
    cout<<"Enter the val u want to delete after ";
    cin>>val;

    while (ptr->data != val && ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    node *temp = ptr->next;

    temp->next->prev = ptr;
    ptr->next = temp->next;

    free(temp);

    return start;

}

int main(int argc, char const *argv[])
{

    int x = 0;

    while (x != 99)
    {
        cout<<endl<<endl;
        cout<<"Choices"<<endl;
        cout<<"1. Create node"<<endl;
        cout<<"2. Display node"<<endl;
        cout<<"3. Diplay reverse node"<<endl;
        cout<<"4. Insert at begging"<<endl;
        cout<<"5. Insert at ending"<<endl;
        cout<<"6. Insert after postion"<<endl;
        cout<<"7. Insert after value"<<endl;
        cout<<"8. Delete begging"<<endl;
        cout<<"9. Delete ending"<<endl;
        cout<<"10. Delete after postion"<<endl;
        cout<<"11. Delete after value"<<endl;
        cout<<"12. EXIT"<<endl;
        
        cout<<endl<<"Enter ur chocie ";
        cin>>x;
        cout<<endl;
        
        switch (x)
        {
        case 1:
            start = create_node(start);
            break;
        case 2:
            display_normal(start);
            break;
        case 3:
            display_rev(start);
            break;
        case 4:
            start = inset_begging(start);
            break;
        case 5:
            start = insert_end(start);
            break;
        case 6:
            start = insert_posi(start);
            break;
        case 7:
            start = insert_val(start);
            break;
        case 8:
            start = del_begging(start);
            break;
        case 9:
            start = del_end(start);
            break;
        case 10:
            start = del_pos(start);
            break;
        case 11:
            start = del_val(start);
            break;
        case 12:
            x=99;
        
        }
        
    }
    

    return 0;
}
