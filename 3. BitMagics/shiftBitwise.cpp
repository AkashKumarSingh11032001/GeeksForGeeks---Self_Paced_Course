// shiftBitwise.cpp
#include <bits/stdc++.h>

using namespace std;

void leftShiftBitwise(int x){

    cout << (x << 1) <<endl; // ---> Left Shift 1 bit
    cout << (x << 2) <<endl; // ---> Left Shift 2 bit
    int y = 4;
    int z = (x << y); // ---> Left Shift y bit
    cout << z <<endl;

}
int main()
{
    shiftBitwise(3);
    return 0;
}