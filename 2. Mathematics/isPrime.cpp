#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x){
    if ( x == 1){
        return false;
    }
    if(x == 2 || x == 3){
        return true;
    }
    if(x % 2 == 0 || x % 3 == 0){
        return false;
    }
    for (int i = 5; i*i <= x; i = i+6)
    {
        /* code */
        if(x%i == 0 || x%(i+2) == 0){
            return false;
        }
    }
    return true;
    
}

int main()
{
    cout << isPrime(7);
    return 0;
}