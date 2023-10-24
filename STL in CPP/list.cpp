#include <bits/stdc++.h>
using namespace std;
#define ll long long

void showlist(list<int>& lst){
    for(auto it=lst.begin();it!=lst.end();it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> lst1, lst2;
    for(int i=0;i<10;i++){
        lst1.push_back(i);
        lst2.push_front(i);
    }

    cout<<"List 1 (lst1) is: ";
    showlist(lst1);

    cout<<"List 2 (lst2) is: ";
    showlist(lst2);
       
    cout<<"lst1.front(): "<<lst1.front()<<endl;
    cout<<"lst1.back(): "<<lst1.back()<<endl;

    lst1.pop_front();
    cout<<"lst1 after pop front: "<<endl;
    showlist(lst1);

    lst1.pop_back();
    cout<<"lst1 after pop back: "<<endl;
    showlist(lst1);

    cout<<"Reverse the list: ";
    lst1.reverse();
    showlist(lst1);

    cout<<"sort the list :";
    lst1.sort();
    showlist(lst1);
}