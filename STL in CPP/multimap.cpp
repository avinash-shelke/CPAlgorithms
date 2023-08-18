/*
Multimap: Multimap is similar to a map with the addition that 
multiple elements can have the same keys. Also, it is NOT required 
that the key-value and mapped value pair have to be unique in this 
case. One important thing to note about multimap is that multimap 
keeps all the keys in sorted order always.

Some Basic Functions associated with multimap: 

begin() – Returns an iterator to the first element in the multimap
end() – Returns an iterator to the theoretical element that follows last element in the multimap
size() – Returns the number of elements in the multimap
max_size() – Returns the maximum number of elements that the multimap can hold
empty() – Returns whether the multimap is empty
pair<int,int> insert(keyvalue,multimapvalue) – Adds a new element to the multimap
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    multimap<int, string> mmp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        string st;
        cin>>val>>st;
        mmp.insert({val,st});
    }
    for(auto it:mmp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
    return 0;
}