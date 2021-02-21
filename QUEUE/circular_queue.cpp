#include<iostream>
using namespace std;

class Queue {
    //max size of Queue can be 4
private:
    int Q[5];
    int front;
    int rear;
public:
    Queue();
    bool isEmpty();
    bool isFull();
    bool enqueue(int x);
    int dequeue();
    int first();
    int last();
    void display();
};

Queue :: Queue() {
    front = 0;
    rear = 0;
}

bool Queue :: isEmpty() {
    if(front == rear ){
        cout<<"Queue is empty."<<endl;
        return true;
    }
    return false;
}

bool Queue :: isFull() {
    if((rear+1)%5 == front ){
        cout<<"Queue is full."<<endl;
        return true;
    }
    return false;
}

bool Queue :: enqueue(int x) {
    if(isFull()){
        return false;
    }
    rear = (rear+1)%5;
    Q[rear] = x;
    cout<<x<<" is added to queue"<<endl;
    return true;
}

int Queue :: dequeue() {
    if(isEmpty()) {
        return 0;
    }
    front = (front+1)%5;
    cout<<Q[front]<<" removed from queue."<<endl;
    return Q[front];
}

int Queue :: first() {
    cout<<"First element of queue is "<<Q[front+1]<<endl;
    return Q[front+1];
}

int Queue :: last() {
    cout<<"Last element of queue is "<<Q[rear]<<endl;
    return Q[rear+1];
}

void Queue :: display() {
    int i = front;
    do{
        cout<<Q[i+1]<<" ";
        i = (i+1)%5;
    } while(i != rear);
    cout<<endl;
}

int main() {
    Queue q;
    q.dequeue();
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.display();
    q.dequeue();
    q.enqueue(1);
    q.display();
    q.enqueue(8);
    q.first();
    q.last();
}
