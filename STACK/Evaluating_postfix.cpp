#include<iostream>
#include<math.h>
using namespace std;

class Stack {
private:
    // Maximum size of Stack is 1000
    int top;
    int a[1000];

public:
    Stack() {
        top = -1;
    }
    bool isEmpty();
    bool isFull();
    bool push(int x);
    int peep(int index);
    int pop();
    int peek();
    void display();
};
bool Stack :: isEmpty() {
    if(top < 0){
        return true;
    }
    else {
        return false;
    }
}

bool Stack :: isFull() {
    if(top > 1000-1){
        return true;
    }
    else {
        return false;
    }
}

bool Stack :: push(int x) {
    if(isFull()){
        cout<<"Stack overflow."<<endl;
        return false;
    } else {
        a[++top] = x;
        cout<<x<<" pushed to stack."<<endl;
        return true;
    }
}

int Stack :: peep(int index) {
    if(isEmpty()) {
        cout<<"Stack overflow."<<endl;
        return 0;
    } else if(index > top+1) {
        cout<<"Not enough elements in stack."<<endl;
        return 0;
    } else {
        int x = a[top-index+1];
        cout<<x<<" is at position "<<index<<" from top of stack."<<endl;
        return x;
    }

}

int Stack :: pop() {
    if(isEmpty()) {
        cout<<"Stack underflow."<<endl;
        return 0;
    } else {
        int x = a[top--];
        cout<<x<<" is poped from stack"<<endl;
        return x;
    }
}

int Stack :: peek() {
    if(isEmpty()) {
        cout<<"Stack underflow."<<endl;
        return 0;
    } else {
        cout<<a[top]<<" is at top of stack."<<endl;
        return a[top];
    }
}

void Stack :: display(){
    cout<<"Elements of stack are : "<<endl;
    for(int i=top;i>=0;i--) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

bool isOperand(char x){
    if(x=='+' || x=='-' || x=='/' || x=='*' || x=='^' || x=='(' || x==')')
        return false;
    else
        return true;

}

int evaluate(char *postfix) {
    Stack s;
    for(int i=0;postfix[i] != '\0' ; i++) {
        if(isOperand(postfix[i])) {
            s.push(postfix[i]-'0 ');
        }
        else {
            int x1,x2,res;
            x2 = s.pop();
            x1 = s.pop();
            switch(postfix[i]) {
            case '+':
                res = x1 + x2;
                s.push(res);
                break;
            case '-':
                res = x1 - x2;
                s.push(res);
                break;
            case '*':
                res = x1 * x2;
                s.push(res);
                break;
            case '/':
                res = x1 / x2;
                s.push(res);
                break;
            case '^':
                res = pow(x1,x2);
                s.push(res);
                break;
            }
        }
    }
    return s.pop();
}

int main() {
    char *exp = "35*62/+4-";
    cout<<evaluate(exp);
}
