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
1) kisi number me ith bit set hai ya nahi usko pata karne ke liye 
number ka AND(&) lenge uss number se jisme sirf ith bit hi set hogi aur baki saare
bits unset honge, agar result 0 aaya matlab given number me ith bit set nahi hai.
agar result non zero aaya matlab given number me ith bit set hai.

2) kisi number me ith bit set karni ho to number ka OR(|) lenge uss number
se jisme sirf ith bit hi set hogi aur baki saare bits unset honge. 

3) kisi number me ith bit unset karni ho to number ka AND(&) lenge uss 
number se jisme sirf ith bit unset hoga aur baki saare bits set honge.

4) kisi number me ith bit ko toggle karna ho to number ka XOR(^) lenge
uss number se jisme sirf ith bit set hogi.
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
    int a = 9;
    printBinary(a);
    int i = 3; // to check ith bit is set or not 
    if((a & (1<<i)) != 0){
        cout<<"set bit"<<endl;
    }else{
        cout<<"not set bit"<<endl;
    }

    // To set the ith bit
    cout<<"Set the ith bit: ";
    printBinary(a | 1<<1);

    // To unset the ith bit
    cout<<"Unet the ith bit: ";
    printBinary(a & ~(1<<3)); // (1<<3) = 00000001000 , ~(1<<3) =  11111110111
                            // in ~(1<<3) only ith bit is unset

    // Toggel the ith bit
    cout<<"Toggle the ith bit: ";
    printBinary(a ^ (1<<2));

    //Count the set bits:
    int cnt=0;
    for(int i=31;i>=0;i--){
        if((a & (1<<i)) != 0){
            cnt++;
        }
    }
    cout<<"Count of set bits: "<<cnt<<endl;

    // STL to count set bits;
    cout<< "Count of set bits (using stl):"<<__builtin_popcount(a)<<endl;

    // NOTE: //
    // __builtin_popcount(int a): this can deal with only integer values of a.
    // __builtin_popcountll(long long a): this can deal with long long.

    cout<<"Count of set bits (using stl for ll): "<<__builtin_popcountll((1LL<<35)-1); 
}