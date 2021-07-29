// isPalidrom.cpp

#include <bits/stdc++.h>

using namespace std;

bool isPalidrom(string &str, int start, int end)
{
    if (start >= end)
        return true;
    return ((str[start] == str[end]) && (isPalidrom(str, start + 1, end - 1)));
}
int main()
{
    string name = "aba";
    cout << isPalidrom(name, 0, name.length());
    return 0;
}