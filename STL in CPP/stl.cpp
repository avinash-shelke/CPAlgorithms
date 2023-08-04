#include <bits/stdc++.h>
using namespace std;

// Four things in C++ stl:
// 1. Algorithms.
// 2. Containers.
// 3. Functions.
// 4. Iterators.

// Pairs - (lies in utiliy library)
void explainPair(){
    pair<int,int> p = {1,3};
    cout<<p.first << " "<<p.second<<endl;

    pair<int, pair<int,int>> p2 = {1, {3,4}};
    cout<<p2.first << " "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}



//Vectors 
void explainVector(){
    vector<int> v; // creates an empty container
    v.push_back(1); // pushes back the data into the container.
    v.emplace_back(2); // similar to push_back() but slightly faster.
    // emplace_back() is better than push_back() since, it constructs the object in-place, potentially avoiding the copy operation.

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.push_back(make_pair(1,2));
    vec.emplace_back(1,2);

    vector<int> arr(5,100); //container with size 5 and value 100 is getting defined.

    vector<int> a(5); //container with size 5 is defined.

    vector<int> v2(a); //creates copy of a and stores in the v2.

    vector<int> :: iterator it;
    for(it=v2.begin(); it!= v2.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    vector<int> ::  iterator itr = v2.end();
    // vector<int> ::  iterator itrr = v2.rend();
    // vector<int> ::  iterator itrrr = v2.rbegin();

    cout<<v2[0]<<" "<<v2.at(0);
    cout<<v2.back()<<" ";

    for(auto it=v2.begin();it!=v2.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<endl;

    for(auto it:v2){
        cout<<it<<" ";
    }
    cout<<endl;

    vector<int> vec2= {10,20,12,23,35};

    // vec2.erase(vec2.begin()+1); //deletes the number at index 1.

    vec2.erase(vec2.begin()+2, vec2.begin()+4); //{10,20,35}  [start, end)

    // Insert Function: insert the value at a particular index
    vector<int> vb(2, 100); // {100,100}
    vb.insert(vb.begin(), 300); // {300,100,100}
    vb.insert(vb.begin()+1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50,50}
    vb.insert(vb.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    // v1.swap(v2); // v1->{30,40}, v2-> {10,20}
    
    vb.clear(); //erases the entire vector
}


// list :  same as vector but extra stuff is it provides front operation as well
void explainList(){ //internal implementation is doubly linked linked list
    list <int> ls;
    ls.push_back(2);// {2}
    ls.emplace_back(4); // {2,4} 

    ls.push_front(5); // {5,2,4}
    ls.emplace_front();
    
    // rest functions same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque <int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4, 1}

    dq.back();
    dq.front();

    // rest functions same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// Stack: LIFO (last in first out)
void explainStack(){
    stack <int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout<< st.top(); //prints 5

    st.pop(); // removes the top element , st={3,3,2,1}

    cout<<st.top(); // 3
    cout<<st.size(); // 4
    cout<<st.empty(); 

    stack <int> st1,st2;
    st1.swap(st2);
}
 

int main(){
    explainPair();
    return 0;
}