package com.javalearning;

public class Stack {

    static int max = 1000;
    private int top;
    private int a[] = new int[max];
    Stack() {
        top = -1;
    }

    boolean isEmpty() {
        if(top < 0) {
            return true;
        } else {
            return false;
        }
    }

    boolean isFull() {
        if(top == max-1) {
            return true;
        } else {
            return false;
        }
    }

    boolean push(int x) {
        if(isFull()) {
            System.out.println("Stack Overflow.");
            return false;
        } else {
            a[++top] = x;
            System.out.println(x + " pushed to stack.");
            return true;
        }
    }

    int pop() {
        if(isEmpty()) {
            System.out.println("Stack Underflow.");
            return 0;
        } else {
            int x = a[top--];
            System.out.println(x + " removed from stack.");
            return x;
        }
    }

    int peek(int index) {
        if(isEmpty()) {
            System.out.println("Stack underflow.");
            return 0;
        } else if(index > top+1) {
            System.out.println("Not enough elements in stack.");
            return 0;
        } else {
            int x = a[top-index+1];
            System.out.println(x + " is at position " + index + " from top of stack.");
            return x;
        }
    }

    int stackTop () {
        if(isEmpty()) {
            System.out.println("Stack underflow.");
            return 0;
        } else {
            int x = a[top];
            System.out.println(x + " is at top of stack.");
            return x;
        }
    }

    void display() {
        System.out.println("Elements of stack are :");
        for(int i=top;i>=0;i--) {
            System.out.print(a[i] + " ");
        }
        System.out.println();
    }
}
