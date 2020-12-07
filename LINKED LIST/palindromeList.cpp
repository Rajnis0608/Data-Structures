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

bool isPalin(node *head)
{
    node *temp = head;
    stack<int>s;
    while(temp)
    {
        s.push(temp->data);
        temp=temp->next;
    }

    while(head)
    {
        if(s.top() != head->data)
            return false;
        head=head->next;
        s.pop();
    }
    return true;

}

int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,3);
    push(&head,2);
    printList(head);
    if(isPalin(head))
        cout<<"list is palindrome"<<endl;
}

