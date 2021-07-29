// digitCount.cpp

#include <bits/stdc++.h>

using namespace std;

int digitCount(int n, int count)
{

    if (n == 0)
        return count;

    int lastDig = n % 10;
    count++;

    return (digitCount(n / 10, count));
}
int main()
{
    int count = 0;
    cout << digitCount(52874, count);
    return 0;
}