/*
Binary Search: it is applicable on monotonic functions.
Monotonic functions : which maintain a given order.
eg: 
    1,3,5,6,7 -> monotonic
    1,2,6,5,4 -> non monotonic
    7,4,3,2,1 -> monotonic
    y=x^2 -> monotonic 
    F,F,F,F,T,T,T,T -> predicate function
    T,T,T,T,F,F,F,F -> predicate function
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int to_find;
    cin >> to_find;
    int lo = 0, hi = n-1;
    while(hi - lo >1){
        int mid = (hi + lo) / 2;
        if(v[mid] < to_find){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
    }
    if(v[lo] == to_find){
        cout<<lo<<endl;
    }
    else if(v[hi] == to_find){
        cout<<hi<<endl;
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}