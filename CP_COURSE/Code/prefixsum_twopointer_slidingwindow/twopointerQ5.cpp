// 4 Sum – Check if a Quadruple with given Sum Exists in an Array

// Given an array of integers, check if there are four elements in the array with given sum.

// Example:

// Input: arr = {10, 20, 30, 40, 1, 2}, target = 91 
// Output: True
// Explanation: Sum of 20 + 30 + 40 + 1 = 91


// Input: arr = {1, 2, 3, 4, 5, 9, 7, 8}, target = 16 
// Output: True
// Explanation: Sum of output is equal to 16, i.e. 1 + 3 + 5 + 7 = 16.


// Input: arr = {1, 1, 2, 2], target = 4 
// Output: False
// Explanation: There is no Quadruple with given target

// [Naive Solution] Using Four Nested Loop – O(n^4) Time and O(1) Space:
// [Expected Approach 1] Sorting and Two Pointer Technique – O(n^3) Time and O(1) Space:
// [Expected Approach 2] Hash Map – O(n^2) Time and O(n^2) Space:

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool check4Sum(const vector<int>& arr, int target){
    int n = arr.size();

    // Store sums of all pairs in a hash map
    unordered_map<int,pair<int,int>> ump;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            ump[arr[i]+arr[j]] = {i,j};
        }
    }

    //Traverse through all pairs and search for target - (current pair sum)
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum = arr[i]+arr[j];
            if(ump.find(target-sum) != ump.end()){
                pair<int,int> p = ump[target-sum];
                if(p.first != i && p.second != j && p.first != j && p.second != i){
                    return true;
                }
            }
        }
    }
    return false; 
}

int main()
{
    vector<int> arr = {1, 1, 1, 1, 1};
    int target = 4;
    cout << (check4Sum(arr, target)? "True" : "False");
    return 0;
}