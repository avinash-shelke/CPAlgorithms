## Segment Tree

- Used for fixed sized arrays and following two types of operations.
    1. Range Query: O(log(n)) typically
    2. Update a value: O(log(n)) typically

- Requires θ(n) preprocessing time and θ(n) auxiliary space.

- Motivation for using Segment Trees:
    For problem 1:
    1. Method1: Simple Approach: Can be used where update() function have more frequrency compared to the getsum()
    2. Method2: Prefix sum: Can be used where getsum() functions have more frequency compared to the update().

    Average time complexity: 
    x/4 -> queries of one type : O(n)
    3x/4 -> queries of other type: O(1)

    avg. time = x/4*O(n) + 3x/4*O(1) / x
              = O(n) 

    So, lets see the Segment tree solution which takes O(logn) time for both type of queries.

- How to calculate the size of Segment Tree based on size of array.

    n -> No. of elements in input array
    #### size = 2*2^[log2n] -1 < 4n
    [log2n] -> log of n base 2. we have to take the ciel value of it.

    4n will allocate a bit larger size to the array but it's fine rather than calculating the exact size.

- Construct Segment Tree Code: FLow
    int arr[] = {10,20,30,40};
    int tree[4*n];

    int constructSegmentTree(int ss, int se, int si){
        if(ss == se){
            tree[si] = arr[ss];
            return tree[si];
        }
        int mid = (ss + se)/2;
        tree[si] = constructSegmentTree(ss, mid, (2*si)+1)+ constructSegmentTree(mid+1, se, (2*si)+2);
        return tree[si];
    }

    Recursive calls: (Bottom up approach)
    
    CST(0, 3, 0) returns {100}
    |
    -> mid = 1
    -> CST(0,1,1) has{30}+ 
        CST(2,3,2) has{70}

        CST(0,1,1) returns{30}
        |
        -> mid = 0
        -> CST(0,0,3) returns{10} +
            CST(1,1,4) returns{20}
        
        CST(2,3,2) return{70}
        |
        -> mid = 2
        -> CST(2,2,5) returns{30} + 
            CST(3,3,6) returns{40}

