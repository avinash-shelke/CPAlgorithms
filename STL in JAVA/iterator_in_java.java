import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;



public class iterator_in_java{
    //Generalized Iterator :
    // void remove_by_cond(Collection<T> c){
    //     Iterator<T> it = c.iterator();
    //     while(it.hasNext()){
    //         if(cond(it.next()) == true){
    //             it.remove();
    //         }
    //     }
    // }

    public static void remove_even(Collection<Integer> c){
        Iterator <Integer> it = c.iterator();
        while(it.hasNext()){
            int x = (Integer) it.next();
            if(x%2==0){
                it.remove();
            }
        }
    }
    public static void main(String[] args){
        
        Collection <Integer> c = new ArrayList<Integer>();
        c.add(10);
        c.add(15);
        c.add(20);
        Iterator <Integer> it = c.iterator();
        while(it.hasNext()){
            System.out.print(it.next()+" ");
        }
        System.out.println();
        remove_even(c);
        Iterator <Integer> itr = c.iterator();
        while(itr.hasNext()){
            System.out.println(itr.next());
        }

    }
};