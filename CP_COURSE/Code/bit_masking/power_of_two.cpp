// Power of Two 

// Given a positive integer n, write a function to find if it is a power of 2 or not
// Examples:

// Input : n = 4
// Output : Yes
// Explanation: 22 = 4
// Input : n = 32
// Output : Yes
// Explanation: 25 = 32

// Approach 1:
// A simple method for this is to simply take the log of the number on base 2 and if you 
// get an integer then the number is the power of 2

// #include <iostream>
// #include <math.h>
// using namespace std;

// bool isPowerOfTwo(int n){
//     if(n==0){
//         return false;
//     }
//     return (ceil(log2(n))) == floor(log2(n));
// }

// int main()
// {
//     isPowerOfTwo(31) ? cout << "Yes" << endl : cout << "No" << endl;
//     isPowerOfTwo(64) ? cout << "Yes" << endl : cout << "No" << endl;
//     return 0;
// }

// Approach 2:
// Find whether a given number is a power of 2 using Brian Kernighan’s algorithm
// As we know that the number which will be the power of two have only one set bit , 
// therefore when we do bitwise AND with the number which is just less than the number 
// which can be represented as the power of (2) then the result will be 0 .

#include <iostream>
using namespace std;

// Function to check if x is a power of 2
bool isPowerofTwo(long long n){
    return (n!=0) && ((n&(n-1)) == 0);
}

int main()
{
    isPowerofTwo(30) ? cout << "Yes\n" : cout << "No\n";
    isPowerofTwo(128) ? cout << "Yes\n" : cout << "No\n";
    return 0;
}

// Time Complexity: O(1)
// Auxiliary Space: O(1)

