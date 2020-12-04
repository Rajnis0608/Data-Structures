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

void deleteNode(node **head,int key)
{
    //deleting a given key
    node *temp= *head;
    node *prev;
    if(temp!=NULL && temp->data==key)
    {
        *head=temp->next;
        delete temp;
        return;
    }

    while(temp!=NULL && temp->data !=key)
    {
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL)
        return;
    prev->next=temp->next;
    delete temp;
}

void deletePosition(node **head,int pos)
{
    node *temp= *head;
    node *prev;
    int count=0;

    if (temp == NULL)
      return;

    if(pos==count)
    {
        *head=temp->next;
        delete temp;
        return;
    }

    while(count!=pos && temp!=NULL)
    {
        prev=temp;
        temp=temp->next;
        count++;
    }

    if(temp==NULL)
        return;

    prev->next=temp->next;
    delete temp;


}

int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    printList(head);
    deleteNode(&head,1);
    printList(head);
    deletePosition(&head,3);
    printList(head);
}
