// ropeCuttinggProblem.cpp

#include <bits/stdc++.h>

using namespace std;

int ropeCuttinggProblem(int n, int a, int b, int c)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    int res = max(ropeCuttinggProblem(n - a, a, b, c), ropeCuttinggProblem(n - b, a, b, c), ropeCuttinggProblem(n - c, a, b, c));

    if (res == -1)
        return -1;
    return res + 1;
}
int main()
{
    ropeCuttinggProblem(23, 11, 9, 12);
    return 0;
}