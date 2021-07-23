// firstSetBit.cpp
#include <bits/stdc++.h>

using namespace std;

int firstSetBit_1(int n)
{
    int mask = 1;
    int counter = 1;

    while (n)
    {
        /* code */
        if (n & mask)
            return counter;
        n = n >> 1;
        counter++;
    }
}
int firstSetBit_2(int n){
    return log(n & -(n-1));
}
int main()
{
    cout << firstSetBit_1(12);
    cout << firstSetBit_2(12);
    return 0;
}