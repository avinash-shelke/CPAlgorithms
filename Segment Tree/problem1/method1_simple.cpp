// Method1: Simple Approach: Can be used where update() function have more frequrency compared to the getsum()

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

int getsum(int qs, int qe){  // Time complexity : θ(qe - qs +1) ~ θ(n)
    int sum=0;
    for(int i=qs; i<=qe; i++){
        sum += arr[i];
    }
    return sum;
}

void updated(int i, int value){ //Time complexity: θ(1)
    arr[i] = value;
}

int main(){
    cout<< getsum(0,2)<<endl;
    cout<< getsum(1,3)<<endl;
    updated(1,60);
    cout<< getsum(0,2)<<endl;
    cout<< getsum(1,3)<<endl;
}