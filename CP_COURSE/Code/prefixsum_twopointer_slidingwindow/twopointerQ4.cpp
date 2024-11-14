//3 Sum - Find All Triplets such that sum of two equals to third element

// Given an array arr[] of size n and an integer sum. Find if there’s a triplet in the array which sums up to the given integer sum.

// Examples: 

// Input: arr = {12, 3, 4, 1, 6, 9}, sum = 24; 
// Output: 12, 3, 9 
// Explanation: There is a triplet (12, 3 and 9) present 
// in the array whose sum is 24. 


// Input: arr = {1, 2, 3, 4, 5}, sum = 9 
// Output: 5, 3, 1 
// Explanation: There is a triplet (5, 3 and 1) present 
// in the array whose sum is 9.


// Input: arr = {2, 10, 12, 4, 8}, sum = 9 
// Output: No Triplet
// Explanation: We do not print in this case and return false.

// Naive Approach – Generating All Triplets – O(n^3) Time & O(1) Space
// Expected Approach 1 – Hash Set – O(n^2) Time and O(n) Space

#include <bits/stdc++.h>
using namespace std;

// Function to find a triplet with a given sum in an array
bool find3Numbers(vector<int>& arr, int sum)
{
    int n = arr.size();
    
    // Fix the first element as arr[i]
    for (int i = 0; i < n - 2; i++) {

        // Create a set to store potential second elements that complement the desired sum
        unordered_set<int> s;

        // Calculate the current sum needed to reach the target sum
        int curr_sum = sum - arr[i];

        // Iterate through the subarray arr[i+1..n-1] to find a pair with the required sum
        for (int j = i + 1; j < n; j++) {

            // Calculate the required value for the second element
            int required_value = curr_sum - arr[j];

            // Check if the required value is present in the set
            if (s.find(required_value) != s.end()) {

                // Triplet is found; print the triplet elements
                cout << "Triplet is " << arr[i] << ", " 
                     << arr[j] << ", " << required_value;
                return true;
            }

            // Add the current element to the set for future complement checks
            s.insert(arr[j]);
        }
    }
    return false;
}

//Driver program to test above function
int main()
{
    vector<int> arr = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;

    find3Numbers(arr, sum);
    return 0;
}