#include <bits/stdc++.h>

using namespace std;

int fact(int x)
{
    // #--->  recursive method [bad perfor]
    // if (x == 0)
    //     return 1;

    // return (x * fact(x-1));

    // #--->  itrrative method
    int res = 1;
    for (int i = 2; i <= x; i++)
    {
        /* code */
        res = res * i;
    }
    return res;
}

int main()
{
    cout << fact(5);
    return 0;
}