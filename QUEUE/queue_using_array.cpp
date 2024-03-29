#include<iostream>
using namespace std;

class Queue {
    //max size of Queue can be 20
private:
    int Q[20];
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
    front = -1;
    rear = -1;
}

bool Queue :: isEmpty() {
    if(front == rear ){
        cout<<"Queue is empty."<<endl;
        return true;
    }
    return false;
}

bool Queue :: isFull() {
    if(rear == 19 ){
        cout<<"Queue is full."<<endl;
        return true;
    }
    return false;
}

bool Queue :: enqueue(int x) {
    if(isFull()){
        return false;
    }
    rear++;
    Q[rear] = x;
    cout<<x<<" is added to queue"<<endl;
    return true;
}

int Queue :: dequeue() {
    if(isEmpty()) {
        return 0;
    }
    front++;
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
    for(int i = front+1;i<=rear;i++) {
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}


int main() {
    Queue q;
    q.dequeue();
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.display();
    q.first();
    q.last();
    q.enqueue(8);
    q.display();
}

