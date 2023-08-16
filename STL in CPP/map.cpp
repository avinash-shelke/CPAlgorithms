/*
Maps: Maps are associative containers that store elements 
in a mapped fashion. Each element has a key value and a 
mapped value. No two mapped values can have the same key values.

Some basic functions associated with Map: 

begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows the last element in the map.
size() – Returns the number of elements in the map.
max_size() – Returns the maximum number of elements that the map can hold.
empty() – Returns whether the map is empty.
pair insert(keyvalue, mapvalue) – Adds a new element to the map.
erase(iterator position) – Removes the element at the position pointed by the iterator.
erase(const g)– Removes the key-value ‘g’ from the map.
clear() – Removes all the elements from the map.

Types of Maps:
1. map -> sorted order according to keys.
2. unordered_map -> not in sorted order.
3. multimap

*/


#include<bits/stdc++.h>
using namespace std;

void print(map<int,string>& mp){
    for(auto &pr:mp){ // Printing map element using auto iterator
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main()
{
    map<int,string> mp;
    mp[1] = "abc";  // Insertion in map takes O(log(n)) time
    mp[5] = "cdc";
    mp[3] = "acd";
    mp.insert({4, "afg"});

    // Printing map element using iterator
    map<int,string>:: iterator it;
    for(it= mp.begin();it!=mp.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    // Unique keys are stored , values may be duplicate for two different keys.

    print(mp); 
    cout<<"----------"<<endl;
    auto itr = mp.find(3); // mp.find() has time complexity of O(log(n))
    if(itr == mp.end()){
        cout<<"NO value";
    }
    else{
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<"----------"<<endl;
    mp.erase(3);  // mp.erase() has time complexity of O(log(n))
    print(mp);

    // mp.clear(); // removes the entire map elements 

    map<string,string> mp2;
    mp2["abcd"] = "abcd"; // time complexity of insertion is O(s.size()*log(n))

    return 0;
}

// Question on map:
/*
Given N strings , print unique strings in lexiographical order
with their frequency.
N<= 10^5
|S|<= 100
*/

// Solution
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    for(auto pr:mp){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
    return 0;
}
*/
