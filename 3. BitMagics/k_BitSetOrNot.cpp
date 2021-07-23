// k_BitSetOrNot.cpp
#include <bits/stdc++.h>

using namespace std;

// ---> Checking if bit at k-th position is set or unset ?
void kBit(int n, int k)
{

    if ((n & (1 << (k - 1)) != 0))
        cout << "Yes";
    else
        cout << "No";
}
int main()
{
    kBit(16, 3);
    return 0;
}