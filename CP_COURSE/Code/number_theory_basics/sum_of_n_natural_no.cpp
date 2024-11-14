// Sum of N Natural Numbers
// Given a number n, find the sum of first natural numbers

// SIMPLE SOLUTION:
// PSEUDOCODE:
// 1) Initialize : sum = 0
// 2) Run a loop from x = 1 to n and
//  do following in loop.
//  sum = sum + x

// CODE:
// #include <iostream>
// using namespace std;
// // Returns sum of first n natural
// // numbers
// int findSum(int n)
// {
//     int sum = 0;
//     for (int x = 1; x <= n; x++)
//         sum = sum + x;
//     return sum;
// }
// // Driver code
// int main()
// {
//     int n = 5;
//     cout << findSum(n);
//     return 0;
// }

// EFFICIENT:
#include <iostream>
using namespace std;
// Returns sum of first n natural
// numbers
int findSum(int n)
{
    return n * (n + 1) / 2;
}
// Driver code
int main()
{
    int n = 5;
    cout << findSum(n);
    return 0;
}