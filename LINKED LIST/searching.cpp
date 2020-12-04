#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
};

void printList(node *n)
{
    while(n)
    {
        cout<<(n->data)<<" ";
        n=n->next;
    }
    cout<<endl;
}

void push(node **head,int new_data)
{
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=(*head);
    (*head)=new_node;

}

bool isearch(node *head,int key)
{
    //iterative
    node *current=head;
    while(head !=NULL)
    {
       if(current->data==key)
            return true;
       current=current->next;
    }
    return false;
}

bool rsearch(node *head,int key)
{
    //recursive
    if(head==NULL)
        return false;
    if(head->data==key)
        return true;
    else
        return rsearch(head->next,key);
}
int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    printList(head);
    isearch(head,1)?cout<<"Found 1\n":cout<<"Not found 1\n";
    rsearch(head,0)?cout<<"Found 0\n":cout<<"Not found 0\n";
}
