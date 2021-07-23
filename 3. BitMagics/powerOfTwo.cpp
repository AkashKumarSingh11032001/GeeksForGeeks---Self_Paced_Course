// powerOfTwo.cpp

// Naive Solution
#include <bits/stdc++.h>

using namespace std;

bool naive(int n){
    if (n == 0)
        return false;
    while (n != 1)
    {
        /* code */
        if(n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
    
}

bool bestSol(int n){
    if(n == 0)
        return false;
    return ((n & (n-1)) == 0);
}
int main()
{
    
    cout << naive(4) <<endl;
    cout << "*****" <<endl;
    cout << bestSol(4) <<endl;

    return 0;
}