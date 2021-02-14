package com.javalearning;

import java.util.Stack;

public class Main {
    public static boolean isBalance(String expression){
        GenericsStack<Character> S = new GenericsStack<>();
        for(int i = 0; i<expression.length(); i++ ) {
            if(expression.charAt(i) == '(') {
                S.push(expression.charAt(i));
            }
            else if(expression.charAt(i) == ')') {
                if(S.isEmpty()) {
                    return false;
                }
                S.pop();
            }
        }
        return S.isEmpty();

    }

    public static void main(String[] args) {
        String expression = "(9+2))+(7+3)";
        String expression2 = "((9+2)*(7+3))";
        System.out.println(isBalance(expression));
        System.out.println();
        System.out.println(isBalance(expression2));
    }
}
