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
void seiveOfErathemis(int n)
{
    vector<bool> checkPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        /* code */
        if (checkPrime[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j = j + i)
            {
                /* code */
                checkPrime[j] = false;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;

    int arr[n],num=1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        arr[i] = num;
        num++;
    }
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        // cout << arr[i] << " ";
        // cout << endl;
        cout << i+1 <<": " ;
        seiveOfErathemis(arr[i]);
        cout <<endl;

    }
    
    return 0;
}