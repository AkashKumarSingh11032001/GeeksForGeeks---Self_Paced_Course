#include <bits/stdc++.h>
using namespace std;
int UnionOfTwoArrays(int a[],int b[],int n,int m){

    unordered_set<int>s;
    for(int i = 0; i <n; i++) {
        s.insert(a[i]);
    }
    for(int i = 0; i < m; i++){
        s.insert(b[i]);
    }
    return s.size();
}

int main() {

    int a[] = {1,2,3,4};
    int b[] = {3,4,5,6};
    int n =sizeof(a)/sizeof(a[0]);
    int m =sizeof(b)/sizeof(b[0]);

    cout << UnionOfTwoArrays(a,b,n,m);
}