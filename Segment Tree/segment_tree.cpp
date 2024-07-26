#include <iostream>
#include <math.h>
using namespace std;

int getMid(int ss, int se){
    return ss + (se-ss)/2;
}

void updateValueUtil(int *tree, int ss, int se, int i, int diff, int si){
    //Base case: If input index lies outside the range of this segment 
    if(i<ss || i>se){
        return;
    }
    // If the input index is in range of this node,  then update the value 
    // of the node and its children 
    tree[si] = tree[si] + diff;
    if(ss!=se){
        int mid = getMid(ss, se);
        updateValueUtil(tree, ss, mid, i, diff, 2*si+1);
        updateValueUtil(tree, mid+1, se, i, diff, 2*si+2);
    }
}

// The function to update a value in input array and segment tree.
// It uses updateValuesUtil() to update the value in segment tree.
void updateValue(int arr[], int *tree, int n, int i, int new_val){
    //Check for erroneous input index
    if(i<0 || i>n-1){
        cout<<"Invalid Input";
        return;
    }

    //Get the difference between new value and old value
    int diff = new_val - arr[i];

    //Update the value in the array
    arr[i] = new_val;

    // Update the values of nodes in the segment tree
    updateValueUtil(tree, 0, n-1, i,diff, 0);
}


/*
    A recursive function to get the sum of values in given range  
    of the array. The following are parameters for this function.  

    st --> Pointer to segment tree  
    si --> Index of current node in the segment tree. Initially  
            0 is passed as root is always at index 0  
    ss & se --> Starting and ending indexes of the segment represented  
                by current node, i.e., st[si]  
    qs & qe --> Starting and ending indexes of query range
*/
int getSumUtil(int *tree, int ss, int se, int qs, int qe, int si){
    //If segment of this node is a part of given range, then return the sum
    // of the segment
    if(qs <= ss && qe >=se){
        return tree[si];
    }

    //If segment of this node is outside the given range
    if(qs>se || qe<ss){
        return 0;
    }
    //If part of this segment overlaps with the given range
    int mid = getMid(ss,se);
    return getSumUtil(tree, ss, mid, qs, qe, 2*si+1) +
        getSumUtil(tree, mid+1, se, qs, qe, 2*si+2);
}


// Return sum of elements in range from index qs (quey start)  
// to qe (query end). It mainly uses getSumUtil()  
int getSum(int *tree, int n, int qs, int qe){
    //check for erroneous input values
    if(qs<0 || qe>n-1 || qs>qe){
        cout<<"Invalid Input";
        return -1;
    }
    return getSumUtil(tree, 0, n-1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].  
// si is index of current node in segment tree st  
int constructSTUtil(int arr[], int *tree, int ss, int se, int si){

    // If there is one element in array, store it in current node of segment tree and return
    if(ss == se){
        tree[si] = arr[ss];
        return tree[si];
    }

    // If there are more than one elements, then recur for left and right subtrees and store
    // the sum of values in this node.
    int mid = getMid(ss, se);
    tree[si] = constructSTUtil(arr, tree, ss, mid, 2*si+1) + constructSTUtil(arr, tree, mid+1, se, 2*si+2);
    return tree[si];
}


/* Function to construct segment tree from given array. This function  
allocates memory for segment tree and calls constructSTUtil() to  
fill the allocated memory */
int *constructST(int arr[], int n){
    // Allocate memory for the segment tree
    
    // Height of the segment tree
    int x = (int)(ceil(log2(n)));

    // Maximum size of the segement tree
    int max_size = 2*(int)pow(2,x) -1;

    //Allocate memory
    int *tree = new int[max_size];

    //Fill the allocated memory tree
    constructSTUtil(arr, tree, 0, n-1, 0);

    //Return the constructed segment tree
    return tree;
}

int main() {
    int arr[] = {1,3,5,7,9,11};
    int n = sizeof(arr)/ sizeof(arr[0]);

    // Build segment tree from given array
    int *tree = constructST(arr, n);

    // Print sum of values in array from index 1 to 3  
    cout<<"Sum of values in given range = "<<getSum(tree, n, 1, 3)<<endl;

    // Update: set arr[1] = 10 and update corresponding  
    // segment tree nodes  
    updateValue(arr, tree, n, 1, 10);    

    // Find sum after the value is updated 
    cout << "Updated sum of values in given range = "<<getSum(tree, n ,1 ,3)<<endl;
    return 0;
}

// Time Complexity: The time Complexity for tree construction is O(n). There are total 
// 2n-1 nodes, and the value of every node is calculated only once in tree construction.
// Time complexity to query is O(Logn). To query a sum, we process at most four nodes 
// at every level and number of levels is O(Logn).
// The time complexity of the update is also O(Logn). To update a leaf value, we process
// one node at every level and number of levels is O(Logn).
// Auxiliary Space: O(MAX)