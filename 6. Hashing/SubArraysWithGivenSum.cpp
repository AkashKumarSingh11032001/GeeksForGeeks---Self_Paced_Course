// Pair vs Subarray
// pair can be non-contiguous while subarray is contiguous


#include<bits/stdc++.h>
using namespace std;

bool Subarray(int a[],int n,int sum){

    unordered_set<int>s;
    int pre_sum = 0;
    for(int i = 0; i <n; i++){
        pre_sum += a[i];
        if(pre_sum == sum) return true;
        if(s.find(pre_sum - sum) != s.end()) return true;
        s.insert(a[i]);
    }
}

int main(){

    int a[] = {1,2,3,4};
    int sum = 6;
    int n =sizeof(a)/sizeof(a[0]);
    cout << Subarray(a,n,sum) << endl;
}