// XOROfArray.cpp
//  sum of xor of element in array from 1 to n.
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 6;
    int rem = n % 4;
    if (rem == 0)
        cout << n;
    if (rem == 1)
        cout << 1;
    if(rem == 2)
        cout << n+1;
    if(rem == 3)
        cout << 0;
    
}