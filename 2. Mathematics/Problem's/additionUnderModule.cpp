// additionUnderModule.cpp
#include <bits/stdc++.h>

using namespace std;

// ---> (a+b)%m = (a%m+b%m) % m [properties]
long long int mod(long long int a, long long int b){
    const unsigned int M = 1000000007;

    long long int sum = (a%M + b%M) % M;
    return sum;
}
int main()
{
    cout << mod(9223372036854775807,9223372036854775807);
    return 0;
}