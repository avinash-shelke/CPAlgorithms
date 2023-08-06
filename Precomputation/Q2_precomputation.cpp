// Array Manipulation:
/*
Starting with a 1-indexed array of zeros and a list of operations,
for each operation add a value to each the array element between two given 
indices, inclusive. Once all operations have been performed, return the 
maximum value in the array.

Example:
n=10
queries = [[1,5,3],[4,8,7],[6,9,1]]
Queries are interpreted as follows:
a  b  k
1  5  3
4  8  7
6  9  1
Add values of k between the indices a and b.
inclusive:
index -> 1  2  3  4  5  6  7  8  9  10
        [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
        [3, 3, 3, 3, 3, 0, 0, 0, 0, 0]
        [3, 3, 3,10,10, 7, 7, 7, 0, 0]
        [3, 3, 3,10,10, 8, 8, 8, 1, 0]
The largest value is 10 after all operations.

Constraints: 
3 <= n <= 10^7
1 <= m <= 2*10^5
1 <= a <= b <= n
0 <= k <= 10^9
*/

//Testcase:
// 5 3
// 1 2 100
// 2 5 100
// 3 4 100
// Output:
// 200

/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long int arr[N];
//  NOTE  //
// Array of size <= 10^5 can only be declared inside main() function.
// Array of size <= 10^7 can be delared globally.  
int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,d;
        cin>>a>>b>>d;
        for(int i=a ;i<=b;i++){
            arr[i] += d;
        }
    }
    long long mx = -1;
    for(int i=1;i<=n;i++){
        if(mx < arr[i]){
            mx = arr[i];
        }
    }
    cout<<mx<<endl;

    // O(m*n + n) = 2 * 10^5 * 10^7 = 10^12 -> it will not execute in 1 second.
    return 0;
}
*/ 
// Prefix Sum (Logic below):
// ath index me ham d ko add kar denge , (b+1)th index par
// ham -d ko add karenge. Saare queries hone ke baad prefix 
// sum lenge jo final required array hoga vo mil jayega.

#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+10;
long long int arr[N];
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,d;
        cin>>a>>b>>d;
        arr[a] += d;
        arr[b+1] -= d;
    }
    for(int i=1;i<=n;i++){
        arr[i] += arr[i-1];
    }
    long long mx = -1;
    for(int i=1;i<=n;i++){
        if(mx < arr[i]){
            mx = arr[i];
        }
    }
    cout<<mx<<endl;
    
    // O(m + n) = 2*10^5 + 10^7 = 10^7 -> it will be executed in 1 second.
    return 0;
}
