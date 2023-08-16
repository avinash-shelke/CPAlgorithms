/*
Unordered Set: An unordered_set is an unordered associative container implemented
using a hash table where keys are hashed into indices of a hash table so that the
insertion is always randomized. All operations on the unordered_set take constant
time O(1) on an average which can go up to linear time O(n) in the worst case 
which depends on the internally used hash function, but practically they perform
very well and generally provide a constant time lookup operation. 
 
The unordered_set can contain a key of any type – predefined or user-defined 
data structure but all the keys must be unique. It is defined inside 
<unordered_set> header file as std::unordered_set class.

Syntax:
std::unordered_set<data_type> name;

In std::unordered_set, many functions are defined among which the most used 
functions are:
The size() and empty() for capacity.
The find() for searching a key.
The insert () and erase() for modification.

*/

// Unorderd set me internally hashmap implemented hota hai.
#include <bits/stdc++.h>
using namespace std;

void print(unordered_set <string> &us){
    for(string val:us){
        cout<<val<<endl;
    }

}
int main()
{
    unordered_set<string> us; 
    us.insert("abc"); // Insert: Time complexity= O(1)
    us.insert("zsdf");
    us.insert("bcd");
    auto it = us.find("abc");  //Find: O(1)
    if(it != us.end()){
        cout<<(*it)<<endl;
        us.erase(it); // Erase: argument as iterator
        us.erase(*it); // Erase: argument as value
    }
    print(us);
    return 0;
}




// Question on Unorderd Set:
/*
Given N strings and Q queries. In each query you are given a string print yes
if string is present else print no.
N <= 10^6
|S| <= 100
Q <= 10^6

Testcase:
5
abc
def
ghj
jkl
ghj
3 
abc
ghj
abcd
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_set <string> us;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        us.insert(s);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        string st;
        cin>>st;
        if(us.find(st) != us.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
*/