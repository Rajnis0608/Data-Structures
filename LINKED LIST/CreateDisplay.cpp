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
}

int main()
{
    node *head,*second,*third;
    head=new node;
    second=new node;
    third=new node;

    head->data=1;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=5;
    third->next=NULL;

    printList(head);
}
