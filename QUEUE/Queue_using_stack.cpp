#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Queue {
    //max size of Queue can be 20
    stack<int> s1,s2;
public:
    bool isEmpty();
    void enqueue(int x);
    int dequeue();
    int first();
    int last();
};

bool Queue :: isEmpty() {
    return (s1.empty() && s2.empty());
}

void Queue :: enqueue(int x){
    cout<<x<<" added to queue."<<endl;
    s1.push(x);
}

int Queue :: dequeue() {
    int x = 0;
    if(s1.empty() && s2.empty()){
        cout<<"Queue is empty."<<endl;
        return x;
    }
    if(s2.empty()) {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    x = s2.top();
    s2.pop();
    cout<<x<<" removed from queue."<<endl;
    return x;
}

int Queue :: first() {
    if(isEmpty()){
        cout<<"Queue is empty."<<endl;
        return 0;
    }
    if(s2.empty() && !s1.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
        }
    }
    cout<<s2.top()<<" is first element of Queue."<<endl;
    return s2.top();
}

int Queue :: last() {
    if(isEmpty()){
        cout<<"Queue is empty."<<endl;
        return 0;
    }
    if(s1.empty() && !s2.empty()){
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    cout<<s1.top()<<" is last element of Queue."<<endl;
    return s1.top();
}

int main(){
    Queue q1;
    cout<<q1.isEmpty()<<endl;
    q1.enqueue(45);
    q1.enqueue(56);
    q1.enqueue(68);
    q1.dequeue();
    q1.first();
    q1.last();
}
