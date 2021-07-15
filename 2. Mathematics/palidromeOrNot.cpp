#include <bits/stdc++.h>

using namespace std;


bool pal(int x){
    int rev = 0;
    int temp = x;
    while (temp != 0)
    {
        int dig = temp % 10;
        rev = rev * 10 + dig;
        temp = temp / 10;
    }
    return (rev == x);
    
}

int main()
{
    cout << pal(121);
    return 0;
}