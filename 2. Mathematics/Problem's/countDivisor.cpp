// countDivisor.cpp
#include <bits/stdc++.h>

using namespace std;

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
            if (i * i <= n)
            {
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