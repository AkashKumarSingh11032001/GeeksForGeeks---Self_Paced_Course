// trailingZero_optimized.cpp

#include <bits/stdc++.h>

using namespace std;

int countZero(int x){

    int res = 0;
    for (int i = 5; i <= x; i = i*5)
    {
        /* code */
        res = res + x/i;
    }
    return res;
    
}
int main()
{
    cout << countZero(10);
    return 0;
}