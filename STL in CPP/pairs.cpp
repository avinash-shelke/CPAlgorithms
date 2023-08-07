/*
Pairs : Pair is used to combine together two values that may be of different 
data types. Pair provides a way to store two heterogeneous objects as a
single unit. It is basically used if we want to store tuples. The pair
container is a simple container defined in <utility> header consisting
of two data elements or objects. 

->  The first element is referenced as ‘first’ and the second element as 
    ‘second’ and the order is fixed (first, second).
->  Pair can be assigned, copied, and compared. The array of objects 
    allocated in a map or hash_map is of type ‘pair’ by default in which 
    all the ‘first’ elements are unique keys associated with their ‘second’
    value objects.
->  To access the elements, we use variable name followed by dot operator 
    followed by the keyword first or second.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    //Input in pair:
    // int n;
    // cin>>n;
    // cin>>p.first;
    // p = make_pair(2, "abc"); // one way of declaring pair
    p = {1, "av"}; // Other way of declaring
    cout<<p.first <<" "<<p.second<<endl;
    
    pair<int,string> p1 = p; // create a pair p1 and it is copy of p
    pair<int,string> &p2 = p; // create a pair p2 and it is pointing p, 
                                // so changes in p2 will affect p.
    
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];  
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};
    swap(p_array[0], p_array[2]); //maintain the relation in arrays after swapping.
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
    
    return 0;
}