// luckyNumber.cpp

#include <bits/stdc++.h>

using namespace std;

bool isLucky(int n){
    static int counter = 2;

    if(counter > n){
        return 1;
    }

    if(n % counter == 0){
        return 0;
    }


    int next_pos = n - (n/counter);
    counter++;
    return isLucky(next_pos);
}
int main()
{
    if( isLucky(13) )
        cout << "True";
    else
        cout << "False";

    return 0;
}