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

bool detectLoop1(node *head)
{
    unordered_set<node*>s;
    while(head)
    {
        if(s.find(head)!=s.end())
            return true;
        s.insert(head);
        head=head->next;
    }
    return false;
}

bool detectLoop2(node *head)
{
    while(head)
    {
        if(head->flag==1)
            return true;
        head->flag=1;
        head=head->next;
    }
    return false;
}

bool detectLoop3(node *head)
{
    node *slow=head;
    node *fast=head;
    while(slow && fast &&fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;;
    }
    return false;
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
    if(detectLoop1(head))
        cout<<"Loop detected"<<endl;
    else
        cout<<"No loop detected"<<endl;
    if(detectLoop2(head))
        cout<<"Loop detected"<<endl;
    else
        cout<<"No loop detected"<<endl;
    if(detectLoop3(head))
        cout<<"Loop detected"<<endl;
    else
        cout<<"No loop detected"<<endl;
}


