#include <bits/stdc++.h>
using namespace std;
void printDecreasing(int a, int b)
{
    if (a == b)
    {
        cout << a << endl;
        return;
    }
    printDecreasing(a + 1, b);
    cout << a << endl;
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    printDecreasing(a, b);
}