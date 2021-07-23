// countSetBit.cpp
#include <bits/stdc++.h>

using namespace std;

int setbit(int n){
    int res = 0;
    while (n > 0)
    {
        /* code */
        n = (n & (n-1));
        res++;
    }
    return res;
    
}
int main()
{
    cout << setbit(5);
    return 0;
}