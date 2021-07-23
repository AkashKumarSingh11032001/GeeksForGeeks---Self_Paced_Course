// firstSetBit.cpp
#include <bits/stdc++.h>

using namespace std;

int firstSetBit(int n)
{
    int mask = 1;
    int counter = 1;

    while (n)
    {
        /* code */
        if (n & mask)
            return counter;
        n = n >> 1;
        counter++;
    }
}
int main()
{
    cout << firstSetBit(12);
    return 0;
}