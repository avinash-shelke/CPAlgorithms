// Sum of squares of n numbers

// Naive approach :
// A naive approach will be to run a loop from 1 to n and sum up all the squares.

// Efficient Approach
#include <iostream>
using namespace std;

// Function calculating
// the series
int summation(int n)
{
    return (n * (n + 1) *
            (2 * n + 1)) /
           6;
}
// Driver Code
int main()
{
    int n = 10;
    cout << summation(n) << endl;
    return 0;
}