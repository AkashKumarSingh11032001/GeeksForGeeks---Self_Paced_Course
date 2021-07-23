// rightmostDifferentBit.cpp
#include <bits/stdc++.h>

using namespace std;

// ---> log2(n & -(n-1)) gives us the position of the rightmost set bit ****VIMP***
int rightmostDifferentBit(int m, int n){

    int xor_val = (m^n);
    return log(n & -(n-1));
}
int main()
{
    cout << rightmostDifferentBit(11,9);
    return 0;
}