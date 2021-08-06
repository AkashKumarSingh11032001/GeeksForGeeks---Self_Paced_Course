// joshep.cpp

#include <bits/stdc++.h>

using namespace std;

int jos(int n, int k) {
    return n > 1 ? (jos(n-1, k) + k - 1) % n + 1 : 1;
}

int main()
{
    cout << jos(3,2);
    return 0;
}