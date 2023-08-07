/*
Vectors : Vectors are the same as dynamic arrays with the ability to 
resize itself automatically when an element is inserted or deleted, 
with their storage being handled automatically by the container. Vector
elements are placed in contiguous storage so that they can be accessed 
and traversed using iterators. In vectors, data is inserted at the end. 
Inserting at the end takes differential time, as sometimes the array 
may need to be extended. Removing the last element takes only constant
time because no resizing happens. Inserting and erasing at the beginning 
or in the middle is linear in time.

Iterators:
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

Capacity:
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.

Element access
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.

Modifiers
assign() – It assigns new value to the vector elements by replacing old ones
push_back() – It push the elements into a vector from the back
pop_back() – It is used to pop or remove elements from a vector from the back.
insert() – It inserts new elements before the element at the specified position
erase() – It is used to remove elements from a container from the specified position or range.
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
clear() – It is used to remove all the elements of the vector container
emplace() – It extends the container by inserting new element at position
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector

The time complexity for doing various operations on vectors is-

Random access – constant O(1)
Insertion or removal of elements at the end – constant O(1)
Insertion or removal of elements – linear in the distance to the end of the vector O(N)
Knowing the size – constant O(1)
Resizing the vector- Linear O(N)
*/

#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){ //v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
// NOTE //
// In Continuos Memory Allocation:(arrays, vectors)
// 1. We can get 10^5 continuos memory blocks when declared locally.
// 2. We can get 10^7 continuos memory blocks when declared globally. 
int main()
{
    vector<int> vec; // vec = []
    vector<int> v(10); // vec = [0,0,0,0,0,0,0,0,0,0]
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        printVec(vec);
        vec.push_back(x); // Vector ke last me element ko add karega in TC:O(1)
    }
    vec.pop_back(); // Vector ke last ke value ko remove karega in  TC:O(1)
    
    vetor<int> v2 = vec; // Copy of vec is stored in v2. TC : O(n)
    vector<int>& v3 = vec; // v3 is pointing to vec by reference  
    printVec(vec);
    
    return 0;
}