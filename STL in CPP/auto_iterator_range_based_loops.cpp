/*
iterators code in short (auto and range based loops):
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={2,3,5,6,7};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // Normally iterator is used as:
    vector<int>:: iterator it;
    for(it=v.begin();it!= v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    //range based loops on vector:
    for(int value: v){  //value just get the copy of the element so does not change the element in the array
        value++;
    }
    for(int value: v){
        cout<<value<<" ";
    }
    cout<<endl;
    for(int &value: v){ //value id pointing to the element in the vector bcoz of which values in the vector changes
        value++;
    }
    for(int value: v){
        cout<<value<<" ";
    }
    cout<<endl;
    
    //auto keyword:
    for(auto it=v.begin();it!= v.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p = {{1,2}, {2,3}};
    for(auto &value: v_p){
        cout<<value.first <<" "<<value.second<<endl;
    }
    
    
    return 0;
}
