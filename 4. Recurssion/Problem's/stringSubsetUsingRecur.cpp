// stringSubsetUsingRecur.cpp

#include <bits/stdc++.h>

using namespace std;

void sub(string s,string curr = " ",int i = 0){
    

    if ( i == s.length()){
        cout << curr << " ";
        return;
    }

    sub(s,curr,i+1);
    sub(s,curr + s[i], i+1);
}

int main()
{
    sub("abc");
    return 0;
}