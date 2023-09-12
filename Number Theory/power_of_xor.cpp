/*  XOR operator:
        1^0 -> 1
        0^1 -> 1
        0^0 -> 0
        1^1 -> 0
        ->same numbers ka XOR hamesha 0 hota hai.
        -> zero ke sath kisi bhi number ka XOR vo number aata hai. 
        imp: x^x == 0
             x^0 == x
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=4, b=6;

    

    // Swapping using XOR:
    a = a ^ b;
    b = b ^ a; // b->a

    // b = b ^ (a ^ b) => (b ^ b) ^ a => a

    a = a ^ b;
    // a = (a ^ b) ^ a => a ^ a ^ b -> b
    cout<<a<<" "<<b<<endl;
}

// Problem:
/*
    Given array a of n integers. All intergers are present in even count except one.
    Find that one integer which has odd count in O(N) time complexity and O(1) space;
    N < 10^5
    a[i] < 10^5
*/
/*
int main(){
    int n;
    cin>>n;
    int x;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        ans ^= x;
    }
    cout<< ans<<endl;
}
*/