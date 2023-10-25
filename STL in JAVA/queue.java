/*
Queue: An interface implemented by the following classes:
      1. LinkedList
      2. ArrayDeque

      LinkedList -->Queue --> Collections
      ArrayDeque -->Queue --> Collections
*/

import java.util.ArrayDeque;

public class queue {
    public static void main(String[] args) {
        // Queue <Integer> q = new LinkedList<Integer> ();
        ArrayDeque<Integer> q = new ArrayDeque<Integer>();
        q.offer(10);
        q.offer(20);
        q.offer(30);
        System.out.println(q.size());
        System.out.println(q.isEmpty());
        System.out.println(q);
        System.out.println(q.peek());// returns front element of queue
        System.out.println(q.poll()); // returns front element and remove it also
        System.out.println(q.peek());
    }
}
