/*
Nesting in Vectors: 
*/

// 1. Vector of pairs:

/*
#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>>& v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<< v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main()
{
    vector<pair<int,int>> v={{1,2},{2,3},{3,4}};
    printVec(v);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printVec(v);
    return 0;
}
*/


// 2. Array of vectors:
/*
#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>& v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++){
        printVec(v[i]);
    }
    return 0;
}
*/

// 3. Vectors of vectors:

#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>& v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<< v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int N;
    cin>>N;
    vector<vector<int>> v;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        vector<int> temp;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    for(int i=0;i<v.size();i++){
        printVec(v[i]);
    }
    cout<<v[0][1];
    return 0;

}