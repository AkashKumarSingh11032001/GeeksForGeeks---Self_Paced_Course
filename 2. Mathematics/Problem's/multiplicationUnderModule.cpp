// multiplicationUnderModule
#include <bits/stdc++.h>

using namespace std;

// ---> (a*b)%m=((a%m)*(b%m))%m
long long int mod(long long int a, long long int b){
    const unsigned int M = 1000000007;
    long long int res = ((a%M)*(b%M))%M;

    return res;
}

int main()
{
    cout << mod(92233720368547758,92233720368547758);
    return 0;
}