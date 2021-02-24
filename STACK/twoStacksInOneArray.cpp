#include<iostream>
using namespace std;

int size = 6;

class twoStack {

private:
    int top1;
    int top2;
    int a[6];

public:

    twoStack(){
        top1 = -1;
        top2 = size;
    }

    bool isFull();
    bool isEmpty1();
    bool isEmpty2();
    bool push1(int x);
    bool push2(int x);
    int pop1();
    int pop2();
    void disp1();
    void disp2();
};

bool twoStack :: isEmpty1() {
    return (top1 == -1);
}

bool twoStack :: isEmpty2() {
    return (top2 == size);
}

bool twoStack :: isFull() {
    return (top1 == top2-1);
}

bool twoStack :: push1(int x) {
    if(isFull()) {
        cout<<"Stack 1 overflow"<<endl;
        return false;
    }
    a[++top1] = x;
    cout<<x<<" pushed to stack 1"<<endl;
    return true;
}

bool twoStack :: push2(int x) {
    if(isFull()) {
        cout<<"Stack 2 overflow"<<endl;
        return false;
    }
    a[--top2] = x;
    cout<<x<<" pushed to stack 2"<<endl;
    return true;
}

int twoStack :: pop1() {
    if(isEmpty1()) {
        cout<<"Stack 1 underflow"<<endl;
        return 0;
    }
    int x = a[top1];
    top1--;
    cout<<x<<" popped from stack 1"<<endl;
    return x;
}

int twoStack :: pop2() {
    if(isEmpty2()) {
        cout<<"Stack 2 underflow"<<endl;
        return 0;
    }
    int x = a[top2];
    top2++;
    cout<<x<<" popped from stack 2"<<endl;
    return x;
}

void twoStack :: disp1() {
    cout<<"Elements of stack 1 are"<<endl;
    for(int i=top1;i>=0;i--) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void twoStack :: disp2() {
     cout<<"Elements of stack 2 are"<<endl;
    for(int i=top2;i<size;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main() {
    twoStack s;
    s.pop1();
    s.pop2();
    s.push1(2);
    s.push1(3);
    s.push1(4);
    s.push1(5);
    s.push2(7);
    s.push2(9);
    s.push2(10);
    s.disp1();
    s.disp2();
    s.pop1();
    s.disp1();
    s.pop1();
    s.disp1();
    s.pop2();
    s.disp2();
    s.pop2();
    s.disp2();
    s.pop2();
}
