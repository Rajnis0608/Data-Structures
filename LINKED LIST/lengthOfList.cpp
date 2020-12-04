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

int getCount(node *head)
{
    //iteratively
    node *current=head;
    int count =0;
    while(current !=NULL)
    {
        current=current->next;
        count++;
    }
    return count;
}

int rGetCount(node *head)
{
    //recursive
    if(head==NULL)
        return 0;
    else
        return 1+rGetCount(head->next);

}

int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    printList(head);
    cout<<rGetCount(head)<<endl;
    cout<<getCount(head)<<endl;
}
