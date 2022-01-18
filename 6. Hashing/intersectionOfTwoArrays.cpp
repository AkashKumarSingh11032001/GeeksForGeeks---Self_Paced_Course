#include<bits/stdc++.h>
using namespace std;

int interSection(int a[],int b[],int m,int n){

    unordered_set<int>s;
    for(int i = 0; i < m; i++){
        s.insert(a[i]);
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        if(s.find(b[i])!=s.end()) {
            res++;
            s.erase(b[i]);
        }
    }
    return res;
}

int main(){

    int a[] = {1,2,3,4};
    int b[] = {3,4,5,6};
    int m =sizeof(a)/sizeof(a[0]);
    int n =sizeof(b)/sizeof(b[0]);

    cout << interSection(a,b,m,n);
}