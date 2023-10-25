import java.util.ArrayList;

public class arraylist {
    public static void main(String[] args) {
        
        ArrayList<Integer> al = new ArrayList<Integer>();
        ArrayList<Integer> ali = new ArrayList<Integer>(20);

        // NOTE: ArrayList must be created with the non-primitive data types
        // <Integer> class is a wrapper class to primitive int ,so it is used
        al.add(10);        
        al.add(20);
        al.add(30);
        System.out.println(al);
    }
}
