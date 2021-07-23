// checkKbit.cpp
#include <bits/stdc++.h>

using namespace std;

void check(int n, int k){
    if(n & (1 << (n-1)) != 0)
        cout << "Yes";
    else 
        cout << "No";
}
int main()
{
    check(5,3);
    return 0;
}