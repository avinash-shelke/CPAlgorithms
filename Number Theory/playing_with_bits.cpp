/*
                        Playing with the bits
MSB/LSB: 

 7th 6th 5th 4th 3rd 2nd 1st 0th
  1   0   1   1   1   0   1   1  
 MSB                         LSB
 
 
Set/Unset
Set : 1 represents set bit
Unset : 0 represents unset bit

// NOTE //
1) kisi number me koi particular ith bit set hai ya nahi usko pata karne ke liye 
number ka AND(&) lenge uss number se jisme sirf ith bit hi set hogi,
agar result 0 aaya matlab given number me ith bit set nahi hai.
agar result non zero aaya matlab given number me ith bit set hai.

2) kisi number me koi ith bit set karni ho to number ka OR(|) lenge 
*/
#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i) & 1);
    }
    cout<<endl;
}

int main(){
    printBinary(9);
    int a = 9;
    int i = 3; // to check ith bit is set or not 
    if((a & (1<<i)) != 0){
        cout<<"set bit";
    }else{
        cout<<"not set bit";
    }
}