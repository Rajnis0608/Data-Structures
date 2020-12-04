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

void insertAfter(node **prev_node,int new_data)
{
    if (*prev_node == NULL)
    {
        cout << "previous node cannot be NULL"<<endl;
        return;
    }
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=(*prev_node)->next;
    (*prev_node)->next=new_node;
}

void append(node **head,int new_data)
{
    node *new_node=new node;
    new_node->data=new_data;
    new_node->next=NULL;

    if(*head == NULL)
    {
          *head=new_node;
          return;
    }

    node *last=*head;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=new_node;
}

int main()
{
    node *head,*second,*third;
    head=NULL;
    second=new node;
    third=new node;
    insertAfter(&head,0); // showing that previous node cannot be NULL
    append(&head,1);
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=5;
    third->next=NULL;
    printList(head);
    push(&head,0);
    //0 1 3 5
    printList(head);
    insertAfter(&head->next,2);
    //0 1 2 3 5
    printList(head);
    append(&head,6);
    //0 1 2 3 5 6
    printList(head);
}
