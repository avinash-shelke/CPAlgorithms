import java.util.Collections;
import java.util.PriorityQueue;

public class priority_queue {
    public static void main(String[] args) {
        PriorityQueue<Integer> minpq = new PriorityQueue<Integer>(); // Min Heap
        PriorityQueue<Integer> maxpq = new PriorityQueue<Integer>(Collections.reverseOrder()); // Max Heap
        minpq.add(10);        
        minpq.add(20);
        minpq.add(30);
        System.out.println(minpq.peek()); // returns the min. element of the priority queue 
        System.out.println(minpq.poll()); // returns the min. element of the priority queue and removes that element 
        System.out.println(minpq.peek());
    }
}
