#include<bits/stdc++.h>
using namespace std;

// (a+b)%M = ((a%M) + (b%M)) % M;
// (a*b)%M = ((a%M) * (b%M)) % M;
// (a-b)%M = ((a%M) - (b%M) + M)%M;
// (a/b)%M = ((a%M) * ((b^-1)%M))%M; // b^-1 => b inverse 

/*Given a number N. Print its factorial.
Constraints : 1<= N<= 100
print answer  modulo M where M=10^9 + 7*/
int main()
{
    int n;
    cin>>n;
    int M = 1000000007;
    long long fact=1;
    for(int i=2;i<=n;++i){
        fact = (fact *i) % M;
    }
    cout<<fact;
    
    return 0;
}