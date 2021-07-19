// countDivisor.cpp
#include <bits/stdc++.h>

using namespace std;

int countDivisor(int n){
   int i;
   for (int i = 2; i*i <= n; i++)
   {
       /* code */
       if(n%i == 0){
           cout << i << " ";
       }

   }

   for (; i >= 1; i--)
   {
       /* code */
       if (n%i == 0)
            cout << n/i <<" ";
   }
   
    
}

int main()
{
    countDivisor(24);
    return 0;
}