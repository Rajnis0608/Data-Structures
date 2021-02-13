package com.javalearning;

public class Main {

    public static void main(String[] args) {
        StackUsingLinkedList s = new StackUsingLinkedList();
        s.push(234);
        s.push(3467);
        s.peek();
        s.push(677);
        s.display();
        s.peep(2);
        s.pop();
        s.display();
        s.peek();
        s.peep(3);
    }
}
