// Method2: Prefix sum: Can be used where getsum() functions have more frequency compared to the update.

/*
Problem1: 
I/P: arr[] = [10,20,30,40,50] ,
func: getsum(0,2) , getsum(1,3), update(1,60), getsum(0,2), getsum(1,3)
O/P: 60 90 100 130
*/

#include <iostream>
using namespace std;
#define n 5
int arr[] = {10,20,30,40,50};
int presum[n];

int getsum(int qs, int qe){ // Time Complexity: O(1)
    if(qs==0){
        return presum[qe];
    }
    return (presum[qe] - presum[qs-1]);
}

int updated(int i, int value){ //Time Complexity: O(n)
    int diff = value - arr[i];
    for(int j=i; j<n;j++){
        presum[j] += diff;
    }
}

void initialize(){ // Time Complexity: O(n) for preprocessing, Auxiliary space: O(n) 
    presum[0] = arr[0];
    for(int i=1;i<n;i++){
        presum[i] = arr[i] + presum[i-1];
    }
}
int main(){
    initialize();
    cout<< getsum(0,2)<<endl;
    cout<< getsum(1,3)<<endl;
    updated(1,60);
    cout<< getsum(0,2)<<endl;
    cout<< getsum(1,3)<<endl;
}