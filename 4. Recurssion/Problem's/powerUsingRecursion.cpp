// powerUsingRecursion.cpp

#include <bits/stdc++.h>

using namespace std;

int power(int n, int k){

    if(k == 0){
        return 0;
    }
    if (k == 1){
        return n;
    }
    
    return (n*power(n,k-1));
}
int main()
{
    cout << power(9,9);
    return 0;
}