// absoluteValue

#include <bits/stdc++.h>

using namespace std;

int absVal(int x){
    
    // #--->  Pre-defined method
    // return abs(x);

    // #--->  itrrative method
    if ( x > 0 )
        return x;
    return -1 * x;
}
int main()
{
    cout << absVal(-70);
    return 0;
}