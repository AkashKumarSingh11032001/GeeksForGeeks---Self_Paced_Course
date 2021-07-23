// MSBOfNumber.cpp
#include <bits/stdc++.h>

using namespace std;

int log2(int N){
    int res = 0;
    while (N >>= 1)
    {
        /* code */
        res++;
    }
    return res;
    
}
int main()
{
    int n = 18;
    int log_val = log2(n);
    int val = pow(2,log_val);
    cout << val;
    return 0;
}