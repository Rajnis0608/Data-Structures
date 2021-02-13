package com.javalearning;

public class Main {

    public static void main(String[] args) {
        Stack stack = new Stack();
        stack.pop();
        stack.push(489);
        stack.display();
        stack.push(787);
        stack.display();
        stack.push(245);
        stack.display();
        stack.pop();
        stack.display();
        stack.peep(2);
        stack.peek();
    }
}
