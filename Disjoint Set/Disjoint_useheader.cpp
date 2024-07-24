#include "Disjoint.h"
#include <iostream>
#define n 5

using namespace std;

int main() {
    disjoint ds(n);

    cout << ds.findpar(2);
    ds.unions(3,4);
    ds.unions(2,3);
    ds.unions(1,2);
    ds.unions(0,1);

    cout<< ds.findpar(0);
    cout<< ds.findpar(1);
    cout<< ds.findpar(2);
    cout<< ds.findpar(4);
}