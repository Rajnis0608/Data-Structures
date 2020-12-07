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

int count(node *head,int key)
{
    int count=0;
    while(head)
    {
        if(head->data==key)
            count++;
        head=head->next;
    }
    return count;
}

int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,2);
    push(&head,7);
    push(&head,9);
    push(&head,8);
    push(&head,7);
    push(&head,1);
    push(&head,7);
    printList(head);
    cout<<"Number of time 7 occurs = "<<count(head,7)<<endl;
}

