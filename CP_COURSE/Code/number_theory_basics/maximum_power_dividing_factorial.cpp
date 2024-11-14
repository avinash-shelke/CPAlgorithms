// Maximum Power Dividing Factorial

// Given two numbers, fact and n, find the largest power of n that divides fact! (Factorial of 
// fact).

// Examples:
// Input :
// fact = 5, n = 2
// Output :
// 3
// Explanation:
// Value of 5! is 120. The largest power
// of 2 that divides 120 is 8 (or 2^3).

// Input :
// fact = 146, n = 15
// Output :
// 35

// The idea is based on Legendre’s formula which finds largest power of a prime number that 
// divides fact!. We find all prime factors of n. For every prime factor we find largest power of 
// it that divides fact!. Finally we return minimum of all found powers.

// Illustration :
// fact = 146, n=15
// First find the prime factor of 15 that are 3 
// and 5 then first divide with 3 and add i.e.
// Applying Legendre’s formula for prime
// factor 3.
// [146/3]+[48/3]+[16/3]+[5/3]+[1/3] = 70
//  48 + 16 + 5 + 1 + 0 = 70
// There is 70 is maximum power of 3 prime number.
// 146! is divisible by 3^70 which is maximum. 
// Applying Legendre’s formula for prime
// factor 5.
// [146/5]+[29/5]+[5/5]+[1/5] = 35
//  29 + 5 + 1 + 0 = 35
// There is 35 is maximum power of 5 prime
// number.
// Minimum of two powers is 35 which is our answer

#include <iostream>
using namespace std;

int maxPF(int n){
    //to find the largest prime number that divides n
    int res=-1;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            res = i;
            n = n/i;
        }
    }
    if(n>1){
        res=n;
    }
    return res;
}

int largestPow(int n,int fact){
    //to find maximum power of n which cna divide fact number
    int p = maxPF(n);
    int res=0;
    while(fact>0){
        fact = fact/p;
        res += fact;
    }
    return res;
}
int main()
{
    int n =6, fact=20;
    cout<<largestPow(n,fact)<<endl;
    return 0;
}