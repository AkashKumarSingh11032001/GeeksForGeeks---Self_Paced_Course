// fibronnicSeries.cpp

#include <bits/stdc++.h>

using namespace std;

long int fib(long int n){
    if (n <= 1)
        return n;

    return fib(n-1) + fib(n-2);
}
int main()
{
    cout << fib(20);
    return 0;
}