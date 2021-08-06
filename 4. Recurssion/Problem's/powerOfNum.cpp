// powerOfNum.cpp

#include <bits/stdc++.h>

using namespace std;

unsigned long long int reverse(long long int n){
     long long int rev = 0;
     while(n != 0){
         rev = (rev * 10) + (n % 10);
         n /= 10;
     }
     return rev;

}

unsigned long long int power(long long int n,long long int k){

    if(k == 0) return 0;
    if(k == 1) return n;


    return (n*power(n,k-1))%1000000007;
}

unsigned long long int powerOfNum (long long int n){

    long long int rev = reverse(n);
    long long int p = power(n,rev);

    return p;

} 

int main()
{
    cout << powerOfNum(12) << endl;
    return 0;
}