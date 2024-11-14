// 3 Sum – Find All Triplets with Zero Sum

// Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.

// Examples : 

// Input: arr[] = {0, -1, 2, -3, 1}
// Output: [[0, -1, 1], [2, -3, 1]]
// Explanation: The triplets with zero sum are 0 + -1 + 1 = 0 and 2 + -3 + 1 = 0  

// Input: arr[] = {1, -2, 1, 0, 5}
// Output: [[1, -2, 1]]
// Explanation: The triplets with zero sum is 1 + -2 + 1 = 0   

// Input: arr[] = {2, 3, 1, 0, 5}
// Output: []
// Explanation: There is no triplet with 0 sum.

//Solutions; 
// [Naive approach] Using Three Nested Loops – O(n^3) Time and O(1) Space
// [Expected Approach] Using Hashing – O(n^2) Time and O(n^2) Space

// Using Hasing
// The idea is to store sum of all the pairs with their indices the hash map. Then, for each element in the array, we check if the pair which makes triplet’s sum zero, exists in the hash map or not. Since there can be multiple valid pairs, we add each one to the hash set (to manage duplicates) while ensuring that all indices in the triplet are distinct.


#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<int>> findTriplets(vector<int> &arr){
    // Set to handle duplicates
    set<vector<int>> resSet;
    int n = arr.size();
    unordered_map<int, vector<pair<int,int>>> ump;

    // Store sum of all pairs with their indices
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ump[arr[i] + arr[j]].push_back({i, j});
        }
    }

    // Find the remaining value to get zero sum
    for(int i=0;i<n;i++){
        int rem = -arr[i];
        if(ump.find(rem) != ump.end()){
            vector<pair<int,int>> pairs = ump[rem];
            // Ensure no two indices are same in triplet
            for(auto p:pairs){
                if(p.first!=i && p.second!=i){
                    vector<int> curr = {i,p.first,p.second};
                    sort(curr.begin(), curr.end());
                    resSet.insert(curr);
                }
            }
        }
    }
    vector<vector<int>> res(resSet.begin(), resSet.end());
    return res;
}

int main()
{
    vector<int> arr = {0, -1, 2, -3, 1};
    vector<vector<int>> res = findTriplets(arr);
    for (int i = 0; i < res.size(); i++){
        cout << res[i][0] << " " << res[i][1] << " " << res[i][2] << endl;
    }
    return 0;
}