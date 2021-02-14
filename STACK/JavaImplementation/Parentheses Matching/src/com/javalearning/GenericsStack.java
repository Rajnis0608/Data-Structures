package com.javalearning;

import java.util.ArrayList;

public class GenericsStack<T> {

        static int max = 1000;
        private int top;
        private T[] a = (T[]) new Object[max];
        GenericsStack() {
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

        boolean push(T x) {
            if(isFull()) {
                System.out.println("Stack Overflow.");
                return false;
            } else {
                a[++top] = x;
                System.out.println(x + " pushed to stack.");
                return true;
            }
        }

        T pop() {
            if(isEmpty()) {
                System.out.println("Stack Underflow.");
                return null;
            } else {
                T x = a[top--];
                System.out.println(x + " removed from stack.");
                return x;
            }
        }

        T peep(int index) {
            if(isEmpty()) {
                System.out.println("Stack underflow.");
                return null;
            } else if(index > top+1) {
                System.out.println("Not enough elements in stack.");
                return null;
            } else {
                T x = a[top-index+1];
                System.out.println(x + " is at position " + index + " from top of stack.");
                return x;
            }
        }

        T peek () {
            if(isEmpty()) {
                System.out.println("Stack underflow.");
                return null;
            } else {
                T x = a[top];
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
