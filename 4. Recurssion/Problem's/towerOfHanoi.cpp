// towerOfHanoi.cpp
// A---> source
// B---> auxilary
// C---> destination
#include <bits/stdc++.h>

using namespace std;

void TOH(int n,int A, int B,int C){

    if(n==1){
        cout << "move " << n << " from " << A << " to " << C <<endl; 
    }

    TOH(n-1,A,C,B);
    cout << " move " << n << " from " << A << " to " << C << " Using " << B <<  endl;
    TOH(n-1,B,A,C); 
} 

int main()
{
    TOH(3,1, 2, 3);
    return 0;
}