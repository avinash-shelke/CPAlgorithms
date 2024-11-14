// Write an efficient program to count the number of 1s in the binary representation of an integer.

// Examples :
// Input : n = 6
// Output : 2
// Binary representation of 6 is 110 and has 2 set bits
// Input : n = 13
// Output : 3
// Binary representation of 13 is 1101 and has 3 set bit

// Simple Method Loop through all bits in an integer, check if a bit is set and if it is, then increment the set bit count. See the program below.

// #include <iostream>
// using namespace std;

// unsigned int countSetBits(unsigned int n)
// {
//     unsigned int count = 0;
//     while (n)
//     {
//         count += n & 1;
//         n >>= 1;
//     }
//     return count;
// }

// int main(){
//     int i = 9;
//     cout << countSetBits(i) << endl;
//     return 0;
// }

// Time Complexity: O(log n)
// Auxiliary Space: O(1)


// Efficient Method
// The Brian Kernighan’s Algorithm:
// Subtracting 1 from a decimal number flips all the bits after the rightmost set bit(which is 1) including the rightmost set bit.
// for example
// 10 in binary is 00001010
// 9 in binary is 00001001
// 8 in binary is 00001000
// 7 in binary is 00000111
// So if we subtract a number by 1 and do bitwise & with itself (n & (n-1)), we unset the rightmost set bit. If we do n & (n-1) in a loop and count the no of times loop executes we get the set bit count.
// The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer.

// 1. Initialize count: = 0
// 2. If integer n is not zero
    // (a) Do bitwise & with (n-1) and assign the value back to n
    // n: = n&(n-1)
    // (b) Increment count by 1
    // (c) go to step 2
// 3. Else return count


//Example for Brian Kernighan’s Algorithm:
//  n = 9 (1001)
//  count = 0
//  Since 9 > 0, subtract by 1 and do bitwise & with (9-1)
//  n = 9&8 (1001 & 1000)
//  n = 8
//  count = 1
//  Since 8 > 0, subtract by 1 and do bitwise & with (8-1)
//  n = 8&7 (1000 & 0111)
//  n = 0
//  count = 2
//  Since n = 0, return count which is 2 now.

#include <iostream>
using namespace std;

// Function to get no of set bits in binary repersentations of passed binary number.

unsigned int countSetBits(int n){
    unsigned int count=0;
    while(n){
        n = n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int i=9;
    cout<< countSetBits(i)<<endl;
    return 0;
}

// Time Complexity: O(log n)
// Auxiliary Space: O(1)

// Using Lookup table: We can count bits in O(1) time using the lookup table.

// #include <bits/stdc++.h>
// using namespace std;
// int BitsSetTable256[256];
// // Function to initialise the lookup table
// void initialize()
// {
// // To initially generate the
// // table algorithmically
// BitsSetTable256[0] = 0;
//     for (int i = 0; i < 256; i++)
//     {
//         BitsSetTable256[i] = (i & 1) +
//         BitsSetTable256[i / 2];
//     }
// }
// // Function to return the count
// // of set bits in n
// int countSetBits(int n)
// {
//     return (BitsSetTable256[n & 0xff] +
//     BitsSetTable256[(n >> 8) & 0xff] +
//     BitsSetTable256[(n >> 16) & 0xff] +
//     BitsSetTable256[n >> 24]);
// }
// // Driver code
// int main()
// {
//     // Initialise the lookup table
//     initialize();
//     int n = 9;
//     cout << countSetBits(n);
// }
