// sumOfDigit.cpp

#include <bits/stdc++.h>

using namespace std;

int sumOf(int n){
    if(n == 0)
        return n;

    int res = n%10;

    return (res + sumOf(n/10));
}
int main()
{
    cout << sumOf(5555);
    return 0;
}