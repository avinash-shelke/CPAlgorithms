// One odd occuring

// Given an array of positive integers. All numbers occur an even number of times except one 
// number which occurs an odd number of times. Find the number in O(n) time & constant 
// space.
// Examples :
// Input : arr = {1, 2, 3, 2, 3, 1, 3}
// Output : 3
// Input : arr = {5, 7, 2, 7, 5, 2, 5}
// Output : 5

// Approach 1:
// A Simple Solution is to run two nested loops. The outer loop picks all elements one by one 
// and the inner loop counts the number of occurrences of the element picked by the outer 
// loop. The time complexity of this solution is O(n2).

// Approach 2:
// The Best Solution is to do bitwise XOR of all the elements. XOR of all elements gives us odd 
// occurring elements.

// Here ^ is the XOR operators;
// Note :
// x^0 = x
// x^y=y^x (Commutative property holds)
// (x^y)^z = x^(y^z) (Associative property holds)
// x^x=0

#include <iostream>
using namespace std;

int getOddOccurrence(int ar[], int n){
    int res=0;
    for(int i=0;i<n;i++){
        res = res ^ ar[i];
    }
    return res;
}

int main()
{
    int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    int n = sizeof(ar)/sizeof(ar[0]);
    // Function calling
    cout << getOddOccurrence(ar, n);
    return 0;
}

// Time Complexity: O(n)
// Auxiliary Space: O(1)

