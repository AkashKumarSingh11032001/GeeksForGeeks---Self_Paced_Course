// bitwiseNOT.cpp
#include <bits/stdc++.h>

using namespace std;

void unsigned_bitwiseNOT(unsigned int x){
    cout << (~x) <<endl;
    x = 5;
    cout << (~x) <<endl;
}

void signed_bitwiseNOT(int x){
    cout << (~x) <<endl;
    x = 5;
    cout << (~x) <<endl;
}
int main()
{
    unsigned_bitwiseNOT(5);
    cout << "*****";
    signed_bitwiseNOT(5);
    return 0;
}