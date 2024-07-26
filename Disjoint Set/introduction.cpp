// Implementing Find Operation: It can be implemented by recursively traversing the parent array until we hit a node who is the parent of itself.

// Finds the representative of the set  
// that i is an element of
int parent[];
int find(int i) 
{
    // If i is the parent of itself
    if (parent[i] == i) 
    {
        // Then i is the representative of 
        // this set
        return i;
    }
    else 
    {
        // Else if i is not the parent of 
        // itself, then i is not the 
        // representative of his set. So we 
        // recursively call Find on its parent
        return find(parent[i]);
    }
}

// Implementing Union Operation: It takes as input two elements and finds the representatives of their sets using the find operation,
//  and then finally puts either one of the trees (representing the set) under the root node of the other tree, effectively merging the
//   trees and the sets.

// Unites the set that includes i 
// and the set that includes j
void union_(int i, int j) 
{
    // Find the representatives
    // (or the root nodes) for the set
    // that includes i
    int irep = find(i),

    // And do the same for the set 
    // that includes j    
    int jrep = find(j);

    // Make the parent of i’s representative
    // be j’s  representative effectively 
    // moving all of i’s set into j’s set)
    parent[irep] = jrep;
}
