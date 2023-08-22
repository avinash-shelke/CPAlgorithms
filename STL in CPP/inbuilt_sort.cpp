/*
Inbuilt sort: uses Introsort internally. (Best sorting algorithm)
Introsort consists of 3 sorting algos: Quick sort, Heap sort, 
Insertion sort

Logic: Pehle start karta hai quick sort se lekin jaise hi depth jyada
ho jati hai recursive calls ki to heap sort par switch kar jata hai.
Number of elements kam honge to insertion sort ka use karta hai.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    // sort has two arguments :
    // 1. pointer to the element from where to start sorting.
    // 2. pointer to the element just after the end of to be sorted array.

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}