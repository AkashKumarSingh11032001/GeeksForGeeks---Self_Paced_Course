// seiveOfErathemis.cpp

#include <bits/stdc++.h>

using namespace std;


void seiveOfErathemis(int n){
    vector <bool> checkPrime(n+1,true);
    for (int i = 2; i <= n; i++)
    {
        /* code */
        if(checkPrime[i]){
            cout << i<<" ";
            for (int j = i*i; j <= n; j=j+i)
            {
                /* code */
                checkPrime[j] = false;
            }
            
        }
    }
    
}
int main()
{
    seiveOfErathemis(7);
    return 0;
}