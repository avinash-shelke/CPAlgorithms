/*
Comparator Function: 
*/

#include <bits/stdc++.h>
using namespace std;
/*
// for integers
bool should_i_swap(int a, int b){
    if(a>b){
        return true;
    }
    return false;
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap(a[i],a[j])){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
*/

//   NOTE  //
// inbuilt sort(): agar hamko swap karna hai to uss case me false return karna hai.
// aur swap nahi karna to true return karna hai comparator function me.

//for pairs
/*
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first != b.first){
        if(a.first > b.first) return false;
        return true;
    }else{
        if(a.second < b.second) return false;
        return true;
    }
}
*/
// the above code can be simplified as below:
// Trick: Jaisa hame sequence chahiye usko ham return kar denge.
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first != b.first){
        return a.first<b.second;
    }
    return a.second>b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(should_i_swap(a[i],a[j])){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }
    
    // The complete iteration can be avoided by using inbuilt sort function along 
    // with the Comparator function.
    sort(a.begin(),a.end(), cmp);
    // sort(a.begin(), a.end(), greater<pair<int,int>>()); sorting in decreasing order.
    
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
}