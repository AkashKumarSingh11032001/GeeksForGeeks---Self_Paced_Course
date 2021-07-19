// isPrime.cpp
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i = i + 6)
    {
        /* code */
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main()
{
    int des = isPrime(7);
    if (des == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}