/*
Problem
Monk is a multi-talented person, and prepares results for his college in his 
free time. (Yes, he is still in love with his old college!) He gets a list of 
students with their marks. The maximum marks which can be obtained in the exam 
is 100.

The Monk is supposed to arrange the list in such a manner that the list is 
sorted in decreasing order of marks. And if two students have the same marks, 
they should be arranged in lexicographical manner.

Help Monk prepare the same!

Input format:
On the first line of the standard input, there is an integer N, denoting the 
number of students. N lines follow, which contain a string and an integer, 
denoting the name of the student and his marks.

Output format:
You must print the required list.

Constraints:
1 <= N <= 105
1 <= | Length of the name | <= 100
1 <= Marks <= 100

Testcase:
4 
Eve 78
Bob 99 
ALice 78
ALice 78
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int, multiset<string>> mp;
    for(int i=0;i<n;i++){
        int mrks;
        string name;
        cin>>name>>mrks;
        mp[mrks].insert(name);
    }
    auto cur_it= --mp.end();
    while(true){
        auto &stu = (*cur_it).second;
        int marks = (*cur_it).first;
        for(auto st:stu){
            cout<<st<<" "<<marks<<endl;
        }
        if(cur_it == mp.begin()) break;
        cur_it--;
    }
    return 0;
}