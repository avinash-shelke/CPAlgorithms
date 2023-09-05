/*
                        Bit Manipulation Tricks
*/
/*
1) Trick 1: To check number is even or odd.
-> Agar 0th bit set hoga to even hai aur agar 0th bit set nahi hai 
   to odd hai. Isse check karne ke liye number ka AND(&) lenge uss
   number se jisme sirf 0th bit set hoga aur baki saare bits unset 
   honge. Agar result 0 aaya matlab even hai aur 1 aaya to odd

2) Trick 2: Multiply or divide a number by 2
-> 1. Agar number me rightshift(>>) by 1 karenge to number divide 
   by 2 ho jayega.
   2. Agar number me leftshift(<<) by 1 karenge to number multiply
   by 2 ho jayega.

3) Trick 3: Uppercase to lowercase and vice versa conversion
-> A me 5th bit unset hai aur a me 5th bit set hai.
   To uppercase ko lowercase me convert karne ke liye 5th bit set 
   karenge aur lowercase ko uppercase me convert karne ke liye
   5th bit ko unset karenge.
   (1<<5) =32, aur 32 is ASCII of whitespace(' '), so upper to lower
   convert karne ke liye whitespace ke sath OR(|) lenge.
   Aur lower to upper karne ke liye whitespace ke negation ke sath
   AND(&) lenge. Lower to upper ke liye underscore('_') ke sath AND(&) liya 
   to bhi uppercase me convert ho jayega.

4) Trick 4: (Clear LSB's), ith bit tak saare ke saare bits 0 karne
   hai 
-> agar ith bit tak sab unset karne hai to AND(&) lenge jisme ith 
   bit tak bits unset honge aur baki saare bits set honge.
   vo create karne ke liye. 
   (1<<(i+1)) me se 1 minus karenge to hame aisa binary milega jisme
   ith bit tak bits set honge aur baki saare unset honge. Fir usko
   invert karte hi hame required binary milega jiska AND(&) number 
   se lete hi uske ith bit tak ke bits unset or 0 ho jayenge.

5) Trick 5: Check power of 2
-> example: 16 = 000010000
            15 = 000001111
            16&15 = 0
*/
#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=31;i>=0;i--){
        cout<< ((num>>i) & 1);
    }
    cout<<endl;
}
int main(){
    for(int i=0;i<8;i++){
        printBinary(i);
        // To check number is odd or even
        if(i&1){
            cout<<"odd"<<endl;
        }
        else{
            cout<<"even"<<endl;
        }
    }

    // NOTE //
    // %(modulo) and (/(division)) operator are slow campared to bit manipulation.
    // Instead of % to check even or odd we can use bit manipulation

    int n=5;
    cout<<"Divide by 2: "<<(n>>1)<<endl; // using Rightshift
    cout<<"Multiply by 2: "<<(n<<1)<<endl; // using Leftshift
    // 101  -> (2^2*1 + 2^1*0 + 2^0*1)
    // 10   -> (2^1*1 + 2^0*0)    , 10 = 101/2
    // 1010 -> (2^3*1 + 2^2*0 + 2^1*1 + 2^0*0)  , 1010 =101*2

    // 3) Uppercase to lowercase Conversion
    for(char c ='A'; c<='E';c++){
        cout<<c<<":";
        printBinary(int(c));
    }
    for(char c ='a'; c<='e';c++){
        cout<<c<<":";
        printBinary(int(c));
    }
    // A: 1000001
    // a: 1100001
    
    char A='A';
    char a = A | (1<<5);
    cout<<a<<endl;
    cout<< char((a & (~(1<<5))))<<endl;

    // NOTE  // 
    // (1<<5) = 32, it is the ASCII of whitespace(' ')
    cout<<char(1<<5)<<endl;
    cout<<char('C'|' ')<<endl;  // upper to lower, OR(|) with ' '
    cout<<char('c' & (~(' ')))<<endl; // lower to upper, AND(&) with (~(' '))
    cout<<char('c' & '_')<<endl; // lower to upper, AND(&) with '_'

    // 4) Clear LSB's (from 0 to ith)
    printBinary(59);
    int x=59;
    int i=4;
    int y = (x & (~((1<<(i+1))-1)));
    printBinary(y);

    //  Clear MSB's (from nth to ith)
    int j=3;
    int z = (x & ((1<<(j+1))-1));
    printBinary(z);
    
    // 5) Check power of 2
    int num=15;
    if(num & (num-1)){
        cout<<"not a power of 2"<<endl;
    }else{
        cout<<"power of 2"<<endl;
    }
}