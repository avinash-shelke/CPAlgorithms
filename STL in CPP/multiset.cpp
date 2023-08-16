/*
Multiset: Multisets are a type of associative containers similar to the set,
with the exception that multiple elements can have the same values. Some Basic 
Functions associated with multiset: 

begin() – Returns an iterator to the first element in the multiset –>  O(1)
end() – Returns an iterator to the theoretical element that follows the last element in the multiset –> O(1)
size() – Returns the number of elements in the multiset –> O(1)
max_size() – Returns the maximum number of elements that the multiset can hold –> O(1)
empty() – Returns whether the multiset is empty –> O(1)
insert (x) – Inserts the element x in the multiset –> O(log n)
clear () – Removes all the elements from the multiset –> O(n)
erase(x) – Removes all the occurrences of x –> O(log n)
 
Removing Element From Multiset Which Have Same Value:

a.erase() – Remove all instances of element from multiset having the same value
a.erase(a.find()) – Remove only one instance of element from multiset having same value

The time complexities for doing various operations on Multisets are -
Insertion of Elements- O(log N)
Accessing Elements – O(log N)
Deleting Elements- O(log N)
*/

#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> &s){
    for(auto val:s){
        cout<<val<<endl;
    }
}
int main()
{
    multiset<string> ms;
    ms.insert("abc");  //Insert: O(log(n))
    ms.insert("zsdf");
    ms.insert("bcd");
    ms.insert("abc");
    
    //Find: returns the iterator of the first occurence of the value if duplicate is present
    auto it = ms.find("abc"); // Find : O(log(n))
    if(it!= ms.end()){
        ms.erase(it); // Erase: if itrerator is given as argument then only the value 
                      // pointed by the iterator is erased. i.e. first occurence of "abc"
    }
    
    ms.erase("abc"); // Erase: if value is given as argument then all duplicate values are deleted
    
    print(ms);

    return 0;
}
