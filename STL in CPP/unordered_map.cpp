/*
Unordered Map:unordered_map is an associated container that stores elements
formed by the combination of a key value and a mapped value. 
It contains successive pairs (key, value), which allows fast retrieval of 
an individual element based on its unique key.

Internally unordered_map is implemented using Hash Table, the key provided to map 
is hashed into indices of a hash table which is why the performance of data structure 
depends on the hash function a lot but on average, the cost of search, insert, and 
delete from the hash table is O(1). 

In the worst case, its time complexity can go from O(1) to O(n), especially for big prime 
numbers. In this situation, it is highly advisable to use a map instead to avoid getting a 
TLE(Time Limit Exceeded) error.
*/

#include <bits.stdc++.h>
using namespace std;
/*
How map and unordered_map differ:
1. Inbuilt implementation: map(inbuilt Red Black Tree), unordered_map(inbuilt hashtable)
2. Time Complexity: map(O(log(n))), unordered_map(O(1))
3. valid keys datatypes: map(any complex data structure can be used like, pair, etc.)
                        unordered_map(only simple data types can be used bcoz comparator is not there)

*/

int main(){
    unordered_map <int, string> ump;
    ump[1] = "abc"; // Insertion in unordered_map: O(1)
    ump[5] = "cdc";
    ump[3] = "acd";
    ump[6] = "a";
    ump[5] = "cde";
    auto it = ump.find(7); // O(1)

    return 0;
}

// Question on Unordered Maps:
/*
Given N strings and Q queries. In each query you are 
given a string print the frequency of that string

N <= 10^6
|S| <= 100
Q <= 10^6
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string,int> ump;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ump[s]++;
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<ump[s]<<endl;
    }
    
    return 0;
}
*/