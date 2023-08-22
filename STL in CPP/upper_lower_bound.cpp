/*
Upper Bound and Lower Bound: 
Upper Bound: It returns an iterator pointing to the first element in the 
range [first, last] that is greater than value, or last if no such element is found. 
The elements in the range shall already be sorted or at least partitioned with 
respect to val. 

Lower Bound: The lower_bound() method in C++ is used to return an iterator pointing 
to the first element in the range [first, last) which has a value not less than val. 
This means that the function returns an iterator pointing to the next smallest number 
just greater than or equal to that number. If there are multiple values that are equal 
to val, lower_bound() returns the iterator of the first such value.
The elements in the range shall already be sorted or at least partitioned with 
respect to val. 
*/

// NOTE //
// -> Kisi integer ka upper bound hame uss number se greater number ka iterator dega.
//    Agar vo element present bhi hai to bhi hame usse greater element ka iterator return karega.
// -> Kisi integer ka lower bound hame vo number ka hi iterator return karega agar vo 
//   present hoga to. Agar vo element present nahi hai to hame next greater element ka 
//   iterator return karega.


#include <bits/stdc++.h>
using namespace std;

// Using upper and lower bounds in the arrays.
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    int *ptr = lower_bound(a, a+n, 5);
    if(ptr == (a+n)){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Lower bound: "<<*ptr<<endl;
    }    
    
    int *ptr2 = upper_bound(a, a+n, 5);
    if(ptr2 == (a+n)){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Upper Bound: "<<*ptr2<<endl;
    }
    
    return 0;
}
*/
// Testcase:  6 4 5 5 25 7 8

// Using upper and lower bounds in Vector
/*
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    auto it = lower_bound(a.begin(), a.end(), 5);
    if(it == a.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Lower Bound: "<<*it<<endl;
    }
    
    auto itr = upper_bound(a.begin(),a.end(), 5);
    if(itr == a.end()){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Upper Bound: "<<*itr<<endl;
    }
}
*/

// NOTE  // 
// Upper and lower bound use binary search internally in case of array and vectors.
// Upper and lower bound use red black trees internally in case os sets and maps.

// Using upper bound and lower bound in Set and map
int main(){
    int n;
    cin>>n;
    set<int> s;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
        mp[x]=i;
    }
    
    auto it = lower_bound(s.begin(),s.end(), 5); // it takes O(n) time and may 
    // give time limit exceeded where log(n) is required.
    auto itr = s.lower_bound(5); // it takes O(log(n)) time. This should be used.
    cout<<"Lower Bound in set: "<<(*itr)<<endl;
    
    // auto itt = upper_bound(mp.begin(),mp.end(), 5); // it takes O(n) time
    // auto ittr = mp.upper_bound(5);
    // cout<<"Upper Bound in Map: "<<itt.first<<endl;
    return 0;
}

