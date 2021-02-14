package com.javalearning;

public class Main {

    public static boolean isBalance(String expression){
        GenericsStack<Character> S = new GenericsStack<>();
        for(int i = 0; i<expression.length(); i++ ) {
            char c = expression.charAt(i);
            if( c == '(' || c == '{' || c == '[') {
                S.push(c);
            }
            else if(c == ')') {
                if(S.isEmpty()) {
                    return false;
                }
                else if(S.peek() == '(') {
                    S.pop();
                }
                else {
                    return false;
                }
            }
            else if(c == '}') {
                if(S.isEmpty()) {
                    return false;
                }
                else if(S.peek() == '{') {
                    S.pop();
                }
                else {
                    return false;
                }
            }
            else if(c == ']') {
                if(S.isEmpty()) {
                    return false;
                }
                else if(S.peek() == '[') {
                    S.pop();
                }
                else {
                    return false;
                }
            }

        }
        return S.isEmpty();
    }

    public static void main(String[] args) {
        String expression = "{(9+2)*[4]+(7+3)}";
        String expression2 = "{(9+2]*[4]+(7+3)}";
        System.out.println(isBalance(expression));
        System.out.println();
        System.out.println(isBalance(expression2));
    }
}
