#include <bits/stdc++.h>
using namespace std;
void printOddEven(int a, int b)
{
    if (a > b)
    {
        return;
    }
    if (a % 2 != 0)
    {
        cout << a << endl;
    }
    printOddEven(a + 1, b);
    if (a % 2 == 0)
    {
        cout << a << endl;
    }
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    printOddEven(a, b);
}