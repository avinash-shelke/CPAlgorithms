// 1.To demonstrate the Relational Operators 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 6, b = 4;
//     // Equal to operator
//     cout << "a == b is " << (a == b) << endl;
//     // Greater than operator
//     cout << "a > b is " << (a > b) << endl;
//     // Greater than or Equal to operator
//     cout << "a >= b is " << (a >= b) << endl;
//     // Lesser than operator
//     cout << "a < b is " << (a < b) << endl;
//     // Lesser than or Equal to operator
//     cout << "a <= b is " << (a <= b) << endl;
//     // true
//     cout << "a != b is " << (a != b) << endl;
//     return 0;
// }

// NOTE: The left shift and right shift operators should not be used for negative numbers.
// The bitwise OR of two numbers is just the sum of those two numbers if there is no 
// carry involved, otherwise you just add their bitwise AND.

// 2. Function to return only the odd occuring element

#include <iostream>
using namespace std;

int findOdd(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main(){
    int arr[] = {12,12,14,90,14,14,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Odd occuring element is: " << findOdd(arr, n) << endl;
    return 0;
}

