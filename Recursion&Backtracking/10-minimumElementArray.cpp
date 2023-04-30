#include <bits/stdc++.h>
using namespace std;
int printMinimum(vector<int> arr, int idx)
{
    if (idx == arr.size())
    {
        return 1e9;
    }
    int minEle = printMinimum(arr, idx + 1);
    return min(minEle, arr[idx]);
}
int minimumElement(vector<int> arr)
{
    if (arr.size() == 1)
    {
        return arr[0];
    }
    return printMinimum(arr, 0);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {11, 7, 3, 10, 14};
    cout << minimumElement(arr) << endl;
}