/*
                        Advanced Recursion and Backtracking:
Subset Generation: 
Given an integer array nums of unique elements, return all possible subsets 
(the power set).The solution set must not contain duplicate subsets. Return the 
solution in any order.
*/

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vec;
void generate(vector<int> &subset, int i, vector<int> &nums){
    if(i == nums.size()){
        vec.push_back(subset);
        return;
    }
    // ith element not in subset
    generate(subset, i+1, nums);
    
    //ith element in subset
    subset.push_back(nums[i]);
    generate(subset, i+1, nums);
    subset.pop_back();
    
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> subset;
    generate(subset, 0,nums);
    
    for(auto subsets: vec){
        for(auto ele:subsets){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

