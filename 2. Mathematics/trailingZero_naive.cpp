// trailingZero_naive.cpp
#include <bits/stdc++.h>

using namespace std;

int countZero(int x)
{

    int res = 1;
    for (int i = 2; i <= x; i++)
    {
        /* code */
        res = res * i;
    }

    int count = 0;
    while (res % 10 == 0)
    {
        /* code */
        count++;
    }
    return count;
}
int main()
{
    cout << countZero(5);
    return 0;
}