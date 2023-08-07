/*
Iterators: An iterator is an object (like a pointer) that points to an element inside the container. 
We can use iterators to move through the contents of the container. They can be visualized as something
similar to a pointer pointing to some location and we can access the content at that particular 
location using them. Iterators play a critical role in connecting algorithm with containers along 
with the manipulation of data stored inside the containers.
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {2,3,4,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // .begin() -> pointer to the starting element of the array.
    // .end() -> pointer to the element next to the last element of the array.

    vector<int> :: iterator it = v.begin();
    for(it=v.begin();it!= v.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    /*
    Difference between (it++) and (it+1)
    it++  -> next iterator 
    it+1  -> next location
    In case of vector next iterator next location par hi rakha hai
    lekin map aur set ke case me next iterator next location par nhi hoga. 
    In case of map,set,graph (non contiguos containers) ,  
    (it+1) will give compilation error since it will give next location which might not have next iterator.
    (it++) will not give error as it gives the next iterator. 
    */

    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator itr;
    for(itr=v_p.begin();itr!=v_p.end(); itr++){
        cout<<(*itr).first <<" "<<(*itr).second<<endl;
    }
    cout<<"----"<<endl;
    for(itr=v_p.begin();itr!=v_p.end(); itr++){
        cout<< (itr->first) <<" "<< (itr->second) <<endl;
    }
    // return 0;
}