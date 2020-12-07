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
  node *ptr1,*ptr2,*dup;
  ptr1=head;
  while(ptr1 && ptr1->next)
  {
      ptr2=ptr1;
      while(ptr2->next)
      {
          if(ptr1->data==ptr2->next->data)
          {
              dup=ptr2->next;
              ptr2->next=ptr2->next->next;
              delete(dup);
          }
          else
            ptr2=ptr2->next;
      }
      ptr1=ptr1->next;
  }
}

int main()
{
    node *head=NULL;
    push(&head,2);
    push(&head,2);
    push(&head,8);
    push(&head,4);
    push(&head,3);
    push(&head,4);
    printList(head);
    removeDuplicates(head);
    printList(head);
}

