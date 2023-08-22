/*
Inbuilt Algorithms: 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min = *min_element(v.begin(),v.end()); //it returns the pointer of the value
    cout<<"Minimum element in vector: "<<min<<endl;
    
    int max = *max_element(v.begin(),v.end());
    cout<<"Maximum element in vector: "<<max<<endl;
    
    int sum = accumulate(v.begin(),v.end(),0); // 0 is the value that will be added to sum of array.
    cout<<"Sum of elements in vector: "<<sum<<endl;
    
    int cnt = count(v.begin(),v.end(), 6);
    cout<<"Count of element in vector: "<<cnt<<endl;
    
    auto it = find(v.begin(),v.end(), 7);
    if(it!= v.end()){
        cout<<"Element Found: "<<*it<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    
    reverse(v.begin(),v.end());
    for(auto val:v){
        cout<<val<<" ";
    }
    cout<<endl;
    string s="abcdefghijk";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    
}

//Testcase: 6 4 5 25 7 9 6