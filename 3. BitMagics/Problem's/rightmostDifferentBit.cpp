// rightmostDifferentBit.cpp
#include <bits/stdc++.h>

using namespace std;

// ---> log2(n & -n)+1 gives us the position of the rightmost set bit ****VIMP***
int rightmostDifferentBit(int m, int n){

    int xor_val = (m^n);
    if (xor_val == 0)
        return 0;
    return log2(xor_val & -xor_val) + 1; //---> log2(n & -n)+1
}
int main()
{
    cout << rightmostDifferentBit(52,24);
    return 0;
}