/*
Recursion: 
Recursion is the process of calling a function itself repeatedly until a particular condition is met. 
A function that calls itself directly or indirectly is called a recursive function and such kind of 
function calls are called recursive calls.

// NOTE //
-> Jab bhi memory related koi issue hota hai to (Segmentation Fault) aata hai.
*/


#include<bits/stdc++.h>
using namespace std;

//Factorial of N;

int fact(int n){
    //base condition:
    if(n==0){
        return 1;
    }
    //Recursive call ke pehle wale statements recursive stack me 
    // jate waqt execute hote hai.
    return fact(n-1)*n;
    //Recursive call ke baad wale statements recursive stack ka 
    // base case hit hone ke baad execute hote hai.
    
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}

// To calculate time complexity of any recursive functions:
// 1. Number of function calls -> n
// 2. What is complexity of each function -> O(1)
// Time complexity = O(1) * n = O(n)
