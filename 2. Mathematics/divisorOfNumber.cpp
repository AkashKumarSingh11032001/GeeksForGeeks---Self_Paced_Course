// divisorOfNumber.cpp

#include <bits/stdc++.h>

using namespace std;

void divisorOfNumber(int n){
    int i;
    for (i = 1; i*i <= n; i++)
    {
        /* code */
        if(n%i == 0){
            cout << i <<" ";
        }
    }
    
    for ( ; i >= 1; i--)
    {
        /* code */
        if(n%i == 0){
            cout << n/i <<" ";
        }
    }
    
    
}
int main()
{
    divisorOfNumber(24);
    return 0;
}