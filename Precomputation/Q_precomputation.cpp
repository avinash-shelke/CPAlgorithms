/*
You are given an array A consisting of N integers along with Q queries.
For each query, we have two integers L,R. You have to find the gcd(Greatest
Common Divisor) of the array after excluding the part from range L to R inclusive
(1 Based Indexing). You are guaranteed that after excluding the part of the array 
remaining array is non empty.

Constraints:
Subtask 1: 
- 2 <= T,N <= 100, 1<= Q <= N,1 <=A[i]<= 10^5
- 1 <= L,R <= N and L=R
- Sum of N over all testcases will be less than or equal to 10^6.
Subtast 2;
- 2 <= T,N <= 10^5, 1<= Q <= N,1 <=A[i]<= 10^5
- 1 <= L,R <= N and L=R
- Sum of N over all testcases will be less than or equal to 10^6.

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+10];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int gc = 0;
            for(int i=1;i<=l-1;i++){
                gc = __gcd(gc, a[i]);
            }
            for(int i=r+1; i<=n;i++){
                gc = __gcd(gc, a[i]);
            }
            cout<<gc<<endl;
        }
    }
    // O(T * (N + Q*(N))) = O(T*N + T*Q*N) = 100^3 (for first subtask)
    return 0;
}
*/

// Testcase:
// 1
// 3 3
// 2 6 9
// 1 1
// 2 2
// 2 3

// - Sum of N over all testcases will be less than or equal to 10^6.
// Iska matlab hai ki O(T*N) = 10^6 consider karte hai aur fir
// bachta hai T(Q)=10^5, O(T*N*Q) = 10^6 * 10^5 = 10^11.
// Still our code cannot run in 1 second. So, now we have to precompute
// so that we can reduce this complexity.   

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int forward[n+10];
        int backward[n+10];
        forward[0] = backward[n+1] =0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            forward[i] = __gcd(forward[i-1], a[i]); 
        }
        for(int i=n; i>=1;i--){
            backward[i] = __gcd(backward[i+1], a[i]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int gc = 0;
            cout<<__gcd(forward[l-1], backward[r+1])<<endl;
        }
    }
    // O(T * (N+N)) = 100^3 -> it can be executed in 1 second for both subtasks
    return 0;
}