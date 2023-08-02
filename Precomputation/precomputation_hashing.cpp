/*
Given array a of N integers. Given Q queries and in each query 
given a number X, print count of that number in array.

Constrainsts:
1<= N <= 10^5
1<= a[i] <= 10^7
1<= Q <= 10^5
*/

/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(a[i] == x){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    
    // Time complexity: O(N) + O(Q*N) = 10^5 + 10^5 * 10^5 = 10^10 -> will 
    // not execute in 1 second
    
    return 0;
}
*/

//Precomputation (Hasing):
// We will store the elements and their count in an array.
// index specifies the element and stored value at that index is its count.

#include <iostream>
using namespace std;
const int N = 1e7+10;
int hsh[N];
/* 
Constraints: 1<= a[i] <= 10^7 , Here array elements are almost near to 10^7,
if the array elements might be around 10^9 and greater then hashing was not possible
as we cannot declare array of size greater than 10^7. (But we can still use hashmap)
*/

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
    
    // O(N) + O(Q) = 10^5 + 10^5 = 10^5 -> will execute in 1 second.
    return 0;
}
