// greatestCommonDivisor_eucliden_notOptimized

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
        
    }
    return a;
}
int main()
{
    cout << gcd(10, 15);
    return 0;
}