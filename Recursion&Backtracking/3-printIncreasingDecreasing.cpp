#include <bits/stdc++.h>
using namespace std;
void printIncreasingDecreasing(int a, int b)
{
    if (a == b)
    {
        cout << a << endl;
        return;
    }
    cout << a << endl;
    printIncreasingDecreasing(a + 1, b);
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
    printIncreasingDecreasing(a, b);
}