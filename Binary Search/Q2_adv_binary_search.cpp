/*
                        Advanced Binary Search with Predicate Function
*/
/*
AGGRCOW - Aggressive cows
#binary-search

Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. 
The stalls are located along a straight line at positions x1 ... xN 
(0 <= xi <= 1,000,000,000).

His C (2 <= C <= N) cows don't like this barn layout and become aggressive 
towards each other once put into a stall. To prevent the cows from hurting 
each other, FJ wants to assign the cows to the stalls, such that the minimum 
distance between any two of them is as large as possible. What is the largest 
minimum distance?
Input
t – the number of test cases, then t test cases follows.
* Line 1: Two space-separated integers: N and C
* Lines 2..N+1: Line i+1 contains an integer stall location, xi
Output
For each test case output one integer: the largest minimum distance.
Example
Input:

1
5 3
1
2
8
4
9
Output:

3
Output details:

FJ can put his 3 cows in the stalls at positions 1, 4 and 8,
resulting in a minimum distance of 3.

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
int n, cows;
int positions[N];

bool canPlaceCows(int minDist){
    int lastPos =-1;
    int cowcnt= cows;
    for(int i=0;i<n;i++){
        if(positions[i]-lastPos >= minDist || lastPos == -1){
            cowscnt--;
            lastPos = positions[i];
        }
        if(cowscnt==0){
            break;
        }
    }
    return cowscnt == 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>cows;
        for(int i=0;i<n;i++){
            cin>>positions[i];
        }
        sort(positions, position+n);
        // TTTTTTTTTTFFFFFFFFFF
        int lo=0, hi=1e9, mid;
        while(hi-lo>1){
            mid = (lo+hi)/2;
            if(canPlaceCows(mid)){
                lo = mid;
            }
            else{
                hi = mid-1;
            }
        }
        // log(10^9)*N
        if(canPlaceCows(hi)){
            cout<<hi<<endl;
        }
        else if(canPlaceCows(lo)){
            cout<<lo<<endl;
        }
    }
    
    return 0;
}