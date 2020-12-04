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

void nthFromLast(node *head,int n)
{
  //using two pointers
  node *main_ptr = head;
  node *ref_ptr = head;
  int count = 0;
  if(head!=NULL)
  {
      while(count<n)
      {
          if(ref_ptr==NULL)
          {
              cout<<n<<" is greater than number of nodes"<<endl;
              return;
          }
          ref_ptr=ref_ptr->next;
          count++;
      }
  if(ref_ptr==NULL)
  {
      head=head->next;
      if(head!=NULL)
        cout<<n<<" node from last is "<<main_ptr->data<<endl;
  }
  else
  {
      while(ref_ptr!=NULL)
      {
          ref_ptr=ref_ptr->next;
          main_ptr=main_ptr
          ->next;
      }
      cout<<n<<" node from last is "<<main_ptr->data<<endl;
  }
 }
}

int main()
{
    node *head=NULL;
    push(&head,7);
    push(&head,3);
    push(&head,1);
    push(&head,2);
    printList(head);
    nthFromLast(head, 3);



}
