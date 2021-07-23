// multiplicationAndDivision.cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 18, y = 2;
    cout << (x << 1) << endl; // ---> multiple by 2, 1 time [18 * 2]
    cout << (x << 2) << endl; // ---> multiple by 2, 2 time [18 * 2 * 2]
    cout << (x << 3) << endl; // ---> multiple by 2, 3 time [18 * 2 * 2 * 2]
    cout << "****" << endl;
    cout << (x >> 1) << endl; // ---> div by 2, 1 time [18 / 2]
    cout << (x >> 2) << endl; // ---> div by 2, 2 time [18 / 2 * 2 ]
    return 0;
}