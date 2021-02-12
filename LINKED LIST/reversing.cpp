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

void reverse1(node **head)
{

    //iterative
    node *prev_node,*current_node,*next_node;
    current_node=(*head);
    prev_node=NULL;
    while(current_node!=0){
        next_node=current_node->next;
        current_node->next=prev_node;
        prev_node=current_node;
        current_node=next_node;

    }
    (*head)=prev_node;
}

void reverse2(node **head)
{

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
    reverse1(&head);
    printList(head);
}

