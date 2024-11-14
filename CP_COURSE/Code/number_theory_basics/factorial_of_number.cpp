// Factorial of a number 

#include <iostream>
using namespace std;

int main(){
    int n,ans=1;
    cin>>n;
    while(n>0){
        ans *= n;
        n--;
    }
    cout<<ans;
}