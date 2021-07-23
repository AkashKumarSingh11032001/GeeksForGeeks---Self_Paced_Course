// logicalBitwis.cpp
#include <bits/stdc++.h>

using namespace std;

void logicalBitwis(int x, int y)
{
    cout << (x & y) << endl; // ---> BitWise AND
    cout << (x | y) << endl; // ---> BitWise OR
    cout << (x ^ y) << endl; // ---> BitWise XOR
}
int main()
{
    logicalBitwis(3, 6);
    return 0;
}