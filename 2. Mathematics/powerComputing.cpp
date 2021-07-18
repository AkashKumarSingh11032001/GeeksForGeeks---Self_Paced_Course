// powerComputing.cpp

#include <bits/stdc++.h>

using namespace std;

long long int powerComputing(long long int x, long long int n)
{
    if (n == 0)
        return 1;
    long long int temp = pow(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}
int main()
{
    cout << powerComputing(2, 50);
    return 0;
}