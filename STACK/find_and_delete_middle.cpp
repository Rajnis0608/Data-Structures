#include<iostream>
using namespace std;

class doublyLinkedList {
public:
    doublyLinkedList *previous;
    int data;
    doublyLinkedList*next;
};

class Stack {
    doublyLinkedList *top;
    doublyLinkedList *middle;
    int count;
public:
    Stack() {
        top = NULL;
        middle = NULL;
        count = 0;
    }
    bool isEmpty();
    bool push(int x);
    int pop();
    int findMiddle();
    int deleteMiddle();
};

bool Stack :: isEmpty() {
    return(top == NULL);
}

bool Stack :: push(int x) {
    doublyLinkedList *temp = new doublyLinkedList();
    if(temp == NULL){
        cout<<"Stack overflow."<<endl;
        return false;
    }
    count++;
    temp->data = x;
    temp->next = top;
    temp->previous = NULL;
    if(top!=NULL)
        top->previous = temp;
    top = temp;
    cout<<x<<" pushed"<<endl;
    if(count == 1) {
        middle = top;
    }
    else if(count % 2 == 1){
        middle = middle->next;
    }
    return true;
}

int Stack :: pop() {
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    doublyLinkedList *temp = top;
    int x = temp->data;
    top = top->next;
    top->previous = NULL;
    delete temp;
    cout<<x<<" popped"<<endl;
    count--;
    if(count%2 == 0){
        middle = middle->previous;
    }
    return x;
}

int Stack ::findMiddle() {
    cout<<(middle->data)<<" is mid of stack"<<endl;
    return middle->data;
}

int Stack :: deleteMiddle() {
    if(isEmpty()){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    count--;
    doublyLinkedList *temp = middle;
    int x = temp->data;
    if(count%2==0) {
        middle = middle->next;
    }
     if(count%2==1) {
        middle = middle->previous;
    }
    delete temp;
    cout<<x<<" removed from middle"<<endl;
    return x;
}

int main() {
    Stack s;
    s.push(3);
    s.findMiddle();
    s.push(4);
    s.findMiddle();
    s.push(5);
    s.findMiddle();
    s.push(9);
    s.push(1);
    s.findMiddle();
    s.deleteMiddle();
    s.findMiddle();
    s.push(6);
    s.push(7);
    s.findMiddle();
    s.deleteMiddle();
    s.pop();
    s.findMiddle();


}

