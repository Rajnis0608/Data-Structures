#include<iostream>
using namespace std;

class Stack {
private:
    // Maximum size of Stack is 1000
    int top;
    char a[1000];

public:
    Stack() {
        top = -1;
    }
    bool isEmpty();
    bool isFull();
    bool push(char x);
    char peep(int index);
    char pop();
    char peek();
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

bool Stack :: push(char x) {
    if(isFull()){
        cout<<"Stack overflow."<<endl;
        return false;
    } else {
        a[++top] = x;
        cout<<x<<" pushed to stack."<<endl;
        return true;
    }
}

char Stack :: peep(int index) {
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

char Stack :: pop() {
    if(isEmpty()) {
        cout<<"Stack underflow."<<endl;
        return 0;
    } else {
        char x = a[top--];
        cout<<x<<" is poped from stack"<<endl;
        return x;
    }
}

char Stack :: peek() {
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

int outPrecedence(char x) {
    if(x=='+' || x=='-')
        return 1;
    else if(x=='/' || x=='*')
        return 3;
    else if(x=='^')
        return 6;
    else if(x=='(')
        return 7;
    return 0;
}

int inPrecedence(char x) {
    if(x=='+' || x=='-')
        return 2;
    else if(x=='/' || x=='*')
        return 4;
    else if(x=='^')
        return 5;
    else if(x=='(')
        return 0;
    return -1;
}


char* toPostfix(char *infix){
    Stack s;
    int i=0,j=0;
    char *postfix = new char[sizeof(infix)/sizeof(infix[0])];
    while(infix[i] != '\0') {
        if(isOperand(infix[i])){
            postfix[j++] = infix[i++];
        }
        else {
            if(inPrecedence(s.peek()) < outPrecedence(infix[i])) {
               s.push(infix[i++]);
            }
            else if(inPrecedence(s.peek()) == outPrecedence(infix[i])){
               s.pop();
               i++;
            }
            else
                postfix[j++] = s.pop();
        }
    }
     while(!s.isEmpty()) {
            postfix[j++] = s.pop();
        }
        postfix[j] = '\0';
        return postfix;
}

int main() {
    char *exp = "((a+b)*c)-d^e^f";
    cout<<toPostfix(exp);
}
