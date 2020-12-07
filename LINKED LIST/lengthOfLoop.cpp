
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
    int flag; //for detectLoop2
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

int countNodes(node *ptr)
{
    int count=1;
    node *temp=ptr;
    while(temp->next!=ptr)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

int LengthOfLoop(node *head)
{
    node *slow=head;
    node *fast=head;
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return countNodes(slow);
    }
    return 0;
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
    head->next->next->next->next=head; //creating a loop
    if(!LengthOfLoop(head))
        cout<<"No loop detected"<<endl;
    else
        cout<<"Loop detected of length "<<LengthOfLoop(head)<<endl;

}


