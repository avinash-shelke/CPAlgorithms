// The idea is to take the prefix sum 
// of the array twice. Once from the front end of the array and another from the back 
// end of the array. After taking both prefix sums run a loop and check for some i if 
// both the prefix sum from one array is equal to prefix sum from the second array 
// then that point can be considered as the Equilibrium point

#include <bits/stdc++.h>
using namespace std;
int equilibrium(int arr[], int n){
    if(n==1){
        return (0);
    }
    int forward[n] = {0};
    int backward[n] = {0};

    forward[0] = arr[0];
    backward[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        forward[i] = forward[i-1] + arr[i];
    }
    for(int i=n-2;i>=0;i--){
        backward[i] = backward[i+1] + arr[i];
    }

    //checking if forward prefix sum is equal to backward prefix sum
    for(int i=0;i<n;i++){
        if(forward[i] == backward[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // Function call
    cout << "First Point of equilibrium is at index "
    << equilibrium(arr, n) << "\n";
}