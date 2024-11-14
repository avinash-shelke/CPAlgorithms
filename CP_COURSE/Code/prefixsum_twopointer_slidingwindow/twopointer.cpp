// Two pointers is really an easy and effective technique that is typically used for searching 
// pairs in a sorted array.
// Given a sorted array A (sorted in ascending order), having N integers, find if there exists 
// any pair of elements (A[i], A[j]) such that their sum is equal to X.


// Method 1. Naive Approach using loops
/*
#include <bits/stdc++.h>
using namespace std;
bool isPairSum(int A[], int N, int X)
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // as equal i and j means same element
            if (i == j){
                continue;
            }
            // pair exists
            if (A[i] + A[j] == X){
                return true;
            }
            // as the array is sorted
            if (A[i] + A[j] > X){
                break;
            }
        }
    }
    // No pair found with given sum.
    return false;
}

int main()
{
    int arr[] = { 2, 3, 5, 8, 9, 10, 11 };
    int val = 17;
    int arrSize = *(&arr + 1) - arr;
    sort(arr, arr + arrSize); // Sort the array
    // Function call
    cout << isPairSum(arr, arrSize, val);
    return 0;
}

*/
// Output
// 1
// Time Complexity: O(n2).

// Method2: Two pointers Technique

#include <iostream>
#include <algorithm>
using namespace std;

bool isPairSum(int A[], int N, int X){
    //represents first pointer
    int i=0;
    //represents second pointer
    int j=N-1;

    while(i<j){
        //If we find a pair
        if(A[i] + A[j] == X){
            return 1;
        }
        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if(A[i] + A[j] < X){
            i++;
        }
        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else{
            j--;
        }
    }
    return 0;
}

int main(){
    // array declaration
    int arr[] = { 2, 3, 5, 8, 9, 10, 11 };

    // value to search
    int val = 17;

    // size of the array
    int arrSize = *(&arr + 1) - arr;

    // array should be sorted before using two-pointer technique
    sort(arr, arr+7);

    // Function call
    cout << (bool)isPairSum(arr, arrSize, val);
    return 0;
}

// Output
// 1
// Time Complexity: O(n)
