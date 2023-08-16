/*
Nesting in Maps:
generally we use,
    map<set<int>,int> m;
    set<pair<int,string>> s;
    map<int, set<int>> m;

*/

#include <bits/stdc++.h>
using namespace std;

// Maps and sets me ham complex data types se nesting kar sakte hai kyuki vo
// comparison ke basis pr kaam karte hai. Unordered maps aur unordered set me 
// complex data types se nesting karne ke liye hame comparison ka logic khud 
// define karna padega.
int main()
{
    map<pair<string,string>,vector<int>> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr:m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &val:list){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}