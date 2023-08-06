/*
Luffy with his crew is on the way to Dressrosa, where he will be fighting one of the warlords of the sea Doflamingo. But now
he is getting bored and wants do a fun activity. He is very much obsessed with palindromes. Given a string S of lower case
English alphabet of length N and two Integers L and R he wants to know whether all the lettlers of the substring from index L
to R (L and R included) can be rearranged to form a palindrome or not. He wants to know this for Q values of L and R and
needs your help in finding the answer.
Palindrome is a string of characters which when reversed reads same as the original String.


Constraints:
1 <= t <= 10
1 <= N,Q <= 10^5
1 <= L <= R <= N
'a' <= S[i] <= 'z' for 1<=i<=N

*/

//  NOTE  // 
// Palindrome property:
// 1. characters ki frequency even honi chahiye for even sized palindrome (eg. aabbaa)
// 2. sirf ek odd element allowed hai jisse ki valid odd sized palindrome create hoga. (eg. aabcbaa)


// Testcase:
// 2
// 5 5
// abcec
// 1 2 
// 2 5 
// 3 5
// 1 5 
// 1 4
// 5 5 
// aabbc
// 1 2
// 2 5 
// 3 5
// 1 5
// 1 4

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
        string s;
        cin>>s;
        while(q--){
            int l,r;
            cin>>l>>r;
            int hsh[26];
            for(int i=0;i<26;i++){
                hsh[i] =0;
            }
            l--,r--;
            for(int i=l;i<=r;i++){
                hsh[s[i]-'a']++;
            }
            int oddcnt=0;
            for(int i=0;i<26;i++){
                if(hsh[i]%2 != 0){
                    oddcnt++;
                }
            }
            if(oddcnt >1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

    // O(T * (N + Q *(26 + N +26))) = O(T * Q * N) = 10 * 10^5 * 10^5 = 10^11 -> 
    // it will not execute in 1 second.

    return 0;
}
*/

// Prefix Sum + Hashing (LOGIC):
// har ek character ke liye ek array banayenge jiska size string jitna hoga.
// Fir jo jo character string me hai unke separate array me 1 karenge jis index par
// vo char. mila hai. Uske baad saare arrays ka prefix sum rakhenge jo batayega O(1) me 
// ki kitne occurences hai particular char. ke ek range me from (l to r).
// Occurence pata chalne ke baad same condition to check palindrome.

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int hsh[N][26];

int main()
{
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<N;i++){
            for(int j=0;j<26;j++){
                hsh[i][j] = 0;
            }
        }
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            hsh[i+1][s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            for(int j=1;j<=n;j++){
                hsh[j][i] += hsh[j-1][i];
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            int oddcnt=0;
            for(int i=0;i<26;i++){
                int charcnt = hsh[r][i] - hsh[l-1][i];
                if(charcnt %2 != 0){
                    oddcnt++;
                }
            }
            if(oddcnt >1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

    // O(T * (n + n*26 + q*26))
    // O(T*N) = 10* 10^5 = 10^6 -> it will execute in 1 second.
    return 0;
}