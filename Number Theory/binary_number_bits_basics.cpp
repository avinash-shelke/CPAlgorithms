/*
Binary Numbers:

Left shift : <<
Rightshift : >>
 */
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

int main(){
    cout<<(6>>1)<<endl;
    cout<<(6<<2)<<endl;
    cout<<(1<<6)<<endl;  // 1<<6 (this will give 2^6) 
    
    //Signed and unsigned int
    cout<<INT_MAX<<endl;
    int a = (1LL<<31)-1;
    cout<<a<<endl;   // In signed int one bit is reserved for sign i.e. why integer overflow
    unsigned int b = (1LL<<32)-1;
    cout<<b<<endl;  // In unsigned int that one bit also used for storing the integer.
    
}