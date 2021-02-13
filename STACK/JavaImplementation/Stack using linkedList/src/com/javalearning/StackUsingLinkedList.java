package com.javalearning;

public class StackUsingLinkedList {

    private class node {
        int data;
        node link;

    }

    node top;

    public StackUsingLinkedList() {
        this.top = null;
    }

    public boolean isEmpty() {
        if(this.top == null) {
            return true;
        } else {
            return false;
        }
    }

    public boolean isFull() {
        node temp = new node();
        if(temp == null) {
            return true;
        } else {
            return false;
        }
    }

    public boolean push(int x) {

        node temp = new node();

        //memory of heap overflow
        if(temp == null) {
            System.out.println("Stack overflow.");
            return false;
        }

        //
        temp.data = x;
        temp.link = top;
        top = temp;
        System.out.println(x + " pushed to stack.");
        return true;
    }

    public int pop() {

        if(isEmpty()) {
            System.out.println("Stack Underflow.");
            return 0;
        } else {
            int x = top.data;
            top = top.link;
            System.out.println(x + " is poped from stack.");
            return x;
        }
    }

    public int peep(int index) {

        int count = index-1;
        node temp = top;

        if(isEmpty()) {
            System.out.println("Stack is empty.");
            return 0;
        }

        while (count != 0 && temp!= null) {
            count--;
            temp = temp.link;
        }

        if(temp == null) {
            System.out.println("Invalid index value.");
            return 0;
        } else {
            System.out.println("Element at position " + index + " from top is " + temp.data);
            return temp.data;
        }
    }

    public int peek() {
        if(isEmpty()) {
            System.out.println("Stack is empty");
            return 0;
        } else {
            System.out.println("Top most element is " + top.data);
            return top.data;
        }
    }

    public void display() {
        node temp = top;
        while ( temp!= null) {
            System.out.print(temp.data + " -> ");
            temp = temp.link;
        }
        System.out.println("Null");
    }
}
