#include<vector>
using namespace std;

class disjoint{
    vector<int> rank, par;
    public:
    //constructor:
    disjoint(int n){
        rank.resize(n+1, 0);
        par.resize(n+1);
        for(int i=0;i<n;i++){
            par[i] = i;
        }
    }

    //methods:
    int findpar(int x){ //find parent of element
        if(par[x] == x){
            return x;
        }
        par[x] = findpar(par[x]);
    }

    void unions(int x, int y){
        int x_rep = findpar(x);
        int y_rep = findpar(y);

        if(rank[x_rep] < rank[y_rep]){
            par[x_rep] = y_rep;
        }
        else if(rank[x_rep] > rank[y_rep]){
            par[y_rep] = x_rep;
        }
        else{
            par[y_rep] = x_rep;
            rank[x_rep]++;
        }
    }

};