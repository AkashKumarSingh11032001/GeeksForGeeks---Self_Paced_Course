#include <bits/stdc++.h>

using namespace std;

int printnum(int x)
{
    if (x == 0)
        return x;
    printnum(x - 1);
    cout << x << " ";
}
int main()
{
    printnum(5);
    return 0;
}