#include <bits/stdc++.h>
using namespace std;
void printIncreasing(int a, int b)
{
    if (a == b)
    {
        cout << a << endl;
        return;
    }
    cout << a << endl;
    printIncreasing(a + 1, b);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    printIncreasing(a, b);
}