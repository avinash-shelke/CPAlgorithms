/*
Set: Sets are a type of associative container in which each element has to be 
unique because the value of the element identifies it. The values are stored in
a specific sorted order i.e. either ascending or descending.

The std::set class is the part of C++ Standard Template Library (STL) and it is 
defined inside the <set> header file.

Syntax:
std::set <data_type> set_name;

Datatype: Set can take any data type depending on the values, e.g. int, char, 
float, etc.

Properties
Storing order – The set stores the elements in sorted order.
Values Characteristics – All the elements in a set have unique values.
Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
Search Technique – Sets follow the Binary search tree implementation.
Arranging order – The values in a set are unindexed.
Note: To store the elements in an unsorted(random) order,  unordered_set() can be used.

Some Basic Functions Associated with Set
begin() – Returns an iterator to the first element in the set.
end() – Returns an iterator to the theoretical element that follows the last element in the set.
size() – Returns the number of elements in the set.
max_size() – Returns the maximum number of elements that the set can hold.
empty() – Returns whether the set is empty.
The time complexities for doing various operations on sets are:

Insertion of Elements – O(log N)
Deletion of Elements – O(log N)
*/

#include <bits/stdc++.h>
using namespace std;

void print(set <string> &s){
    for(string val:s){
        cout<<val<<endl;
    }

}
int main()
{
    set<string> shet; 
    shet.insert("abc"); // Insert: Time complexity= O(log(n))
    shet.insert("zsdf");
    shet.insert("bcd");
    auto it = shet.find("abc");  //Find: O(lof(n))
    if(it != shet.end()){
        cout<<(*it)<<endl;
        shet.erase(it); // Erase: argument as iterator
        shet.erase(*it); // Erase: argument as value
    }
    print(shet);
    return 0;
}




// Question on Set:
/*
Given N strings, print unique strings in lexicographical order 
N<=10^5
|S| <= 100000
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    set <string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto val:s){
        cout<<val<<endl;
    }
    return 0;
}
*/