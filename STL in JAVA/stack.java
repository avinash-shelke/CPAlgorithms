// Stack:
/*  B --> A : class B is inherited from class A.
    Stack--> Vector--> List--> Collection 
    ArrayDeque -->Deque --> Queue --> Collection
*/

import java.util.ArrayDeque;

public class stack {
    public static void main(String[] args) {
        // Stack <Integer> stack = new Stack<>();
        ArrayDeque<Integer> s = new ArrayDeque<>();
        s.push(10);        
        s.push(20);
        s.push(30);
        System.out.println(s.size());
        System.out.println(s.peek()); // returns the top item
        System.out.println(s.pop()); // returns the top item and removes top item also
        System.out.println(s.peek());
        System.out.println(s.isEmpty());
        // All functions have TC=O(1)
    }
}
