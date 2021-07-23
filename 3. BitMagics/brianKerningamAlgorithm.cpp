// brianKerningamAlgorithm.cpp
// ---> Count set bit( i.e count number of 1 in a binary representation of a number)

#include <bits/stdc++.h>

using namespace std;

void BKA(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    cout << res << endl;
}
int main()
{
    BKA(40);
    return 0;
}