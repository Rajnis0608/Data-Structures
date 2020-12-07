#include<iostream>
#include<bits/stdc++.h>
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

void removeDuplicates(node *head)
{
    node *current = head;
    node *next_next;
    if(!current)
    return;
    while(current->next!=NULL){
        if(current->data==current->next->data)
        {
            next_next=current->next->next;
            delete (current->next);
            current->next=next_next;
        }
        else
            current=current->next;
    }
}

int main()
{
    node *head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,2);
    push(&head,2);
    push(&head,5);
    printList(head);
    removeDuplicates(head);
    printList(head);
}

