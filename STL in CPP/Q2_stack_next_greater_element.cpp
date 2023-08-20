/*
Problem:
Next Greater Element:

*/

#include<bits/stdc++.h>
using namespace std;

vector <int> NGE(vector<int> vec){
    vector<int> nge(vec.size());
    stack <int> st;
    for(int i=0;i<vec.size();i++){
        while(!st.empty() && vec[i]>vec[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    return nge;
}

int main()
{
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> nge = NGE(vec);
    for(int i=0;i<n;i++){
        cout<<vec[i] <<" "<<(nge[i] == -1? -1 : vec[nge[i]])<<endl;
    }
    return 0;
}