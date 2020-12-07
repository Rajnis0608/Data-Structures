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

int mid1(node *head)
{
    int x=0;
    node *temp=head;
    while(temp)
    {
        x++;
        temp=temp->next;
    }

    x=x/2;
    temp=head;
    for(int i=0;i<x;i++)
    {
        temp=temp->next;
    }
    return temp->data;
}

int mid2(node *head)
{
    node *fast=head;
    node *slow=head;
    while(fast && fast->next)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

int mid3(node *head)
{
    node *mid=head;
    int x=0;
    while(head)
    {
        if(x&1)
            mid=mid->next;
        head=head->next;
        x++;
    }

    return mid->data;
}

int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    push(&head,9);
    printList(head);
    cout<<"Middle element is : "<<mid1(head)<<endl;
    cout<<"Middle element is : "<<mid2(head)<<endl;
    cout<<"Middle element is : "<<mid3(head)<<endl;
}

