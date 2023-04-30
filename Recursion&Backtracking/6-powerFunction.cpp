#include <bits/stdc++.h>
using namespace std;
int power1(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power1(a, b - 1);
}
// 3^4  = 3^2 * 3^2
// 3^5  = 3^2 * 3^2 * 3
int power2(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int smallAns = power2(a, b / 2);
    smallAns *= smallAns;
    return b % 2 == 0 ? smallAns : smallAns * a;
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b;
    cin >> a >> b;
    // cout << power1(a, b) << endl;
    cout << power2(a, b) << endl;
}