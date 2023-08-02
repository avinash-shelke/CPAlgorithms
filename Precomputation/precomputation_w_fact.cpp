/*
Given T testcases and in each test case a number N. Print its factorial
for each testcase % M
where M = 10^9+7.

Constraints:
1<= T <= 10^5
1<= N <= 10^5
*/


/*
#include <iostream>
using namespace std;
const int M = 1e9+7;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long fact = 1;
        for(int i=2;i<=n;i++){
            fact = (fact*i) % M;  // We are computing factorials again 
        }
        cout<<fact<<endl;
    }
    // O(T*N) = 10^10 -> not possible to run in 1 second
    
    return 0;
}
*/

//Precomputation:
// We try to store the the factorials of a particular number in the array 
// so that we can avoid repeated computations

#include <iostream>
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

int main()
{
    fact[0] = fact[1] = 1;
    for(int i=2;i<N;i++){
        fact[i] = fact[i-1] *i;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
        
    }
    // O(N)+O(T) = 10^5 + 10^5= 10^5 -> can easily execute in 1 second
    
    return 0;
}