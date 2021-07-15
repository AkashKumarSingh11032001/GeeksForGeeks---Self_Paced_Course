// factorialDigit.cpp

#include <bits/stdc++.h>

using namespace std;

int fact(int x){
    if (x == 0)
        return 1;
    return x* fact(x-1);
}
int factDig(int res)
{
    
    int count = 0;
    while (res != 0)
    {
        /* code */
        count++;
        res = res /10;
    }
    return count;
    
}
int main()
{
    int a = fact(12);
    cout << factDig(a); 
    
    return 0;
}