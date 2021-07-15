#include <bits/stdc++.h>

using namespace std;


int countDig(int x){

    // #--->  itrrative method
    // int res = 0;
    // while(x != 0){
    //     res++;
    //     x = x/10;
    // }
    // return res;

    // #--->  log method
    return floor(log10(x) + 1);

    // #--->  recursive method
    // if (x == 0)
    //     return 0;
    
    // return 1+ countDig(x/10);


}

int main()
{
    cout << countDig(89574) <<endl;
    return 0;
}