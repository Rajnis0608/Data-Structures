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

int nthNode(node *head,int index)
{
    //iterative
    node *current=head;
    for(int i=0;i<index;i++)
    {
        current=current->next;
    }
    return current->data;
}

int rnthNode(node *head,int index)
{
    //recursive
    int count=0;
    if(count==index)
        return head->data;
    count++;
    return rnthNode(head->next,index-1);

}
int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    printList(head);
     cout << "Element at index 3 is " << nthNode(head, 3)<<endl;
      cout << "Element at index 2 is " << rnthNode(head, 2)<<endl;

}
