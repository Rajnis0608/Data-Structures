#include<iostream>
using namespace std;

class Queue{
    class Node{
    public:
        int data;
        Node *link;
    };
    Node *front;
    Node *rear;
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    bool isEmpty();
    bool isFull();
    bool enqueue(int x);
    int dequeue();
    int first();
    int last();
    void display();
};

bool Queue :: isEmpty() {
   if(front == NULL){
       cout<<"Queue is empty."<<endl;
        return true;
   }
    return false;
}

bool Queue :: isFull() {
   Node *temp = new Node();
   if(temp == NULL){
        cout<<"Queue is full."<<endl;
        return true;
   }
   delete temp;
   return false;
}

bool Queue :: enqueue(int x) {
    Node *temp = new Node();
    if(temp == NULL){
        return false;
     }
     if(front == NULL){
        rear = temp;
        front = temp;
    }
    else {
        rear->link = temp;
        rear = temp;
    }
    temp->data = x;
    temp->link = NULL;
    cout<<x<<" is added to queue"<<endl;

    return true;
}

int Queue :: dequeue() {
    if(isEmpty()){
        return 0;
    }
    Node *temp;
    temp = front;
    int x = temp->data;
    front = front->link;
    delete temp;
    cout<<x<<" removed from queue."<<endl;
    return x;
}

int Queue :: first() {
    if(isEmpty()){
        return 0;
    }
    cout<<"First element of queue is "<<front->data<<endl;
    return front->data;
}

int Queue :: last() {
    if(isEmpty()){
        return 0;
    }
    cout<<"Last element of queue is "<<rear->data<<endl;
    return rear->data;

}

void Queue :: display() {
    Node *temp = front;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->link;
    }
    cout<<endl;
}

int main() {
    Queue q;
    q.enqueue(4);
    q.enqueue(7);
    q.enqueue(9);
    q.display();
    q.first();
    q.last();
    q.dequeue();
    q.display();
    return 0;
}
