// Construct a Segement tree from an input array 

#include <iostream>
using namespace std;
#define n 4

int arr[] = {10,20,30,40};
int tree[4*n];

int constructSegmentTree(int ss, int se, int si){ //Time Complexity: θ(n) (for every node we are performing constant work)
    if(ss == se){
        tree[si] = arr[ss];
        return tree[si];
    }
    int mid = (ss + se)/2;
    tree[si] = constructSegmentTree(ss, mid, (2*si)+1)+ constructSegmentTree(mid+1, se, (2*si)+2);
    return tree[si];
}

int main(){
    constructSegmentTree(0, n-1, 0);

    for(int i=0;i<4*n;i++){
        cout<< tree[i]<<endl;
    }
}