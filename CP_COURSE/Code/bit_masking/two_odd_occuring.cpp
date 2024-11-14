//  Two Odd Occuring 

// Given an unsorted array that contains even number of occurrences for all numbers except 
// two numbers. Find the two numbers which have odd occurrences in O(n) time complexity 
// and O(1) extra space.

// Examples:
// Input: {12, 23, 34, 12, 12, 23, 12, 45}
// Output: 34 and 45
// Input: {4, 4, 100, 5000, 4, 4, 4, 4, 100, 100}
// Output: 100 and 5000
// Input: {10, 20}
// Output: 10 and 20

// Approach 1: Naive method
// To solve this problem is to run two nested loops. The outer loop picks an element and the 
// inner loop counts the number of occurrences of the picked element. If the count of 
// occurrences is odd then print the number. The time complexity of this method is O(n^2)

// Approach 2: using XOR
// A O(n) time and O(1) extra space solution using XOR:
// Let the two odd occurring numbers be x and y. We use bitwise XOR to get x and y. We try 
// to make 2 groups such that x and y go to different groups. E.g. [a, a, b, b, x], . Then the 
// problem will become “Find ‘one’ number with odd occurrence in an unsorted array”, which 
// becomes a simple problem and will be solved using XOR. Below are steps to group x and y 
// differently.

#include <iostream>
#include<vector>
using namespace std;

void odd_occuring(vector<int>& arr){
    
}

int main()
{
    vector<int> arr = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    odd_occuring(arr);
    return 0;
}