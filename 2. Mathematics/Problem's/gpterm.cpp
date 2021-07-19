// gpterm.cpp
#include <bits/stdc++.h>

using namespace std;

int gp(int a, int b, int n){
    int r = b/a;
    return a*pow(r,n-1);
}

int main()
{
    cout << gp(2,3,1);
    return 0;
}