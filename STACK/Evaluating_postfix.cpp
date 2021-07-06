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

int evaluatePostfix(char* exp)
{
    // Create a stack of capacity equal to expression size
    Stack* stack = createStack(strlen(exp));
    int i;

    // See if stack was created successfully
    if (!stack) return -1;

    // Scan all characters one by one
    for (i = 0; exp[i]; ++i)
    {
        // If the scanned character is an operand (number here),
        // push it to the stack.
        if (isdigit(exp[i]))
            push(stack, exp[i] - '0');

        // If the scanned character is an operator, pop two
        // elements from stack apply the operator
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i])
            {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2/val1); break;
            }
        }
    }
    return pop(stack);
}

int main() {
    char *exp = "35*62/+4-";
    cout<<evaluate(exp);
}
