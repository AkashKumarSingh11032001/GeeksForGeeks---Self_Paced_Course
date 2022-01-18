#include <bits/stdc++.h>
using namespace std;
int PairSum(int a[],int n,int sum){

    unordered_set<int>s;
    for(int i = 0; i <n; i++){
        if(s.find(sum-a[i]) != s.end()){
            return true;
        }
        s.insert(a[i]);
    }
    return false;
}

int main() {

    int a[] = {1,2,3,4};
    int sum = 6;
    int n =sizeof(a)/sizeof(a[0]);
    cout << PairSum(a,n,sum) << endl;
}