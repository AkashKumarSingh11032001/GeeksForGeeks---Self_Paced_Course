// modulorMulticativeInverse.cpp

#include <bits/stdc++.h>

using namespace std;

// int findgcd(int a, int m){
//     if (m==0){
//         return a;
//     }
//     else{
//         return findgcd(m,a%m);
//     }
// }
int inverse(int a, int m)
{

    for (int i = 1; i < m; ++i)
    {
        /* code */
        if (((a % m) * (i % m) % m) == 1)
            return i;
    }
}

int main()
{
    cout << inverse(3, 11);
    return 0;
}