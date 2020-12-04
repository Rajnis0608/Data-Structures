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

int nthFromLast(node *head,int index)
{
    //iterative
    int len=0;
    node *temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    if(len<index)
        return 0;

    temp=head;
    for(int i=1;i<(len-index+1);i++)
    {
        temp=temp->next;
    }
    return temp->data;
}

void rnthFromLast(node *head,int index)
{
    // recursive
    static int i = 0;
    if (head == NULL)
        return ;
    rnthFromLast(head->next,index);
    if (++i == index)
      cout << "Element "<<index<<" from last is " <<head->data<<endl;
}
int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    printList(head);
    cout << "Element at 3rd from last is " << nthFromLast(head, 3)<<endl;
    rnthFromLast(head, 2);


}
