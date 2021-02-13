#include<iostream>
using namespace std;

class Stack {
    class node{
    public:
        int data;
        node *link;
};
    node *top;

public:
    Stack() {
        top = NULL;
    }
    bool isEmpty();
    bool isFull();
    bool push(int x);
    int pop();
    int peep(int index);
    int peek();
    void display();
};

bool Stack :: isEmpty() {
    if(top == NULL) {
        return true;
    } else {
        return false;
    }
}

bool Stack :: isFull() {
    node *temp = new node();
    if(temp == NULL){
        delete temp;
        return true;
    } else {
        delete temp;
        return false;
    }
}

bool Stack :: push(int x) {
    node *temp = new node();
     if(temp == NULL){
        cout<<"Stack overflow."<<endl;
        return false;
    }
    temp->data = x;
    temp->link = top;
    this->top = temp;
    cout<<x<<" pushed to stack."<<endl;
    return true;
}

int Stack :: pop() {
    if(isEmpty()) {
        cout<<"Stack underflow."<<endl;
        return 0;
    }
    node *temp = top;
    int x = temp->data;
    top = top->link;
    delete temp;
    cout<<x<<" poped from stack."<<endl;
    return x;
}

int Stack :: peep(int index) {

    if(isEmpty()) {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    node *temp = top;
    int count = index-1;
    while(count != 0 && temp!=NULL) {
        temp = temp->link;
        count--;
    }
    if(temp == NULL) {
        cout<<"Invalid index"<<endl;
        return 0;
    } else {
        cout<<"Element at position "<<index<<" from top is "<<temp->data<<endl;
        return temp ->data;
    }
}

int Stack :: peek(){
    cout<<top->data<<" is at top of stack."<<endl;
}

void Stack :: display() {
    node *temp = top;
     while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp = temp->link;
     }
     cout<<"null"<<endl;
}

int main() {
    Stack st;
    st.push(5);
    st.push(6);
    st.push(9);
    st.display();
    st.peek();
    st.pop();
    st.peep(1);
    st.peep(7);
    st.display();
}
