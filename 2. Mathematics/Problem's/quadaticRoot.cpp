// quadaticRoot.cpp

#include <bits/stdc++.h>

using namespace std;

void root(int a, int b, int c){
    int dis = pow(b,2) - 4*a*c;
    int root1 = (-b + sqrt(dis)) / 2*a;
    int root2 = (-b - sqrt(dis)) / 2*a;

    cout << root1 <<" " << root2;
}
int main()
{
    
    root(1,-2,1);
    return 0;
}