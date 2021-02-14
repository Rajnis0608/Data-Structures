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

bool isBalanced(char *exp){
    Stack s;
    for(int i=0;exp[i]!='\0';i++) {
        if(exp[i]=='('){
            s.push(exp[i]);
           }
        else if(exp[i]==')') {
            if(s.isEmpty()){
                return false;
            }
            s.pop();
        }
    }
    return s.isEmpty();
}

int main() {
    char *exp = "((a+b))*(c-d))";
    if(isBalanced(exp)){
        cout<<"Parenthesis matches successfully."<<endl;
    }
    else {
        cout<<"Parenthesis don't matches."<<endl;
    }


}
