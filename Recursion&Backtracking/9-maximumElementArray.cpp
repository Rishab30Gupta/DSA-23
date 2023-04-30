#include <bits/stdc++.h>
using namespace std;
int printMaximum(vector<int> arr, int idx)
{
    if (idx == arr.size())
    {
        return -1e9;
    }

    int maxEle = printMaximum(arr, idx + 1);
    return max(maxEle, arr[idx]);
}
int maximumElement(vector<int> arr)
{
    if (arr.size() == 1)
    {
        return arr[0];
    }
    return printMaximum(arr, 0);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {11, 7, 3, 10, 14};
    cout << maximumElement(arr) << endl;
}