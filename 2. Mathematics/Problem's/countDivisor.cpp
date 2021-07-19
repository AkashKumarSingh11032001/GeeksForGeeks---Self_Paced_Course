// countDivisor.cpp
#include <bits/stdc++.h>

using namespace std;

void divisorOfNumber(int n)
{
    int i;
    for (i = 1; i * i <= n; i++)
    {
        /* code */
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    for (; i >= 1; i--)
    {
        /* code */
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}
int seiveOfErathemis(int n)
{
    vector<bool> checkPrime(n + 1, true);
    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        
        if (checkPrime[i])
        {
            //cout << i << " ";

            //******
            if (i*i <= n){
                count++;
            }
            //******

            for (int j = i * i; j <= n; j = j + i)
            {
                /* code */
                checkPrime[j] = false;
            }
        }
    }
    return count;
}
int main()
{
    
    cout << seiveOfErathemis(10);


   
    
    return 0;
}