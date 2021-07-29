// digitalRoot.cpp

#include <bits/stdc++.h>

using namespace std;

int digitalRoot(int n)
{
    if (n == 0)
        return n;

    return (n % 10 + digitalRoot(n / 10));
}
int main()
{
    cout << digitalRoot(digitalRoot(5));
    return 0;
}