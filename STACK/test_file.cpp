#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    //Max size of stack is 20
    stack<int> st;
    stack<int> minStack;
    int min = 2147483647;

public:

    bool isEmpty() {
        return st.empty();
    }

    bool isFull() {
        if(st.size() == 20) {
            return true;
        }
        return false;
    }

    void push(int x) {
        if(!isFull()) {
            if(x<min)
                min = x;
            minStack.push(min);
            st.push(x);
        }
    }

    void pop(){
        if(!isEmpty()){
            st.pop();
            minStack.pop();
        }
    }

    int getMin() {
        return minStack.top();
    }

};
int main() {
        Stack sstack;
        sstack.push(6);
        sstack.push(9);
        sstack.push(8);
        sstack.push(5);
        sstack.push(6);
        sstack.push(5);
        cout<<sstack.getMin()<<endl;
        sstack.pop();
        cout<<sstack.getMin()<<endl;
        sstack.pop();
        cout<<sstack.getMin()<<endl;

}
