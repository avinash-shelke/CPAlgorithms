// Given an array arr[] of size n. Given Q queries and in each query given L and R, print sum of 
// array elements from index L to R.
// Input : n = 6
//  a[ ] = {3, 6, 2, 8, 9, 2}
//  q = 4
//  l = 2, r = 3.
//  l = 4, r = 6.
//  l = 1, r = 5.
//  l = 3, r = 6.




#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];

int main(){
    int n ;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i==0){
            pf[i] = a[i];
        }
        else{
            pf[i] = pf[i-1] + a[i];
        }
        cout<<pf[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        // Calculating sum from l to r
        if(r>n || l<0){
            cout<<"Please input in range 1 to "<<n<<endl;
            break;
        }   
        if(l==1){
            cout<<pf[r] <<endl;
        }
        else{
            cout<<pf[r] - pf[l] <<endl;
        }
    }
}