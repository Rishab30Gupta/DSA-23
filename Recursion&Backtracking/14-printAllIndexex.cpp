#include <bits/stdc++.h>
using namespace std;
vector<int> allIndex(vector<int> arr, int data, int idx, int count)
{
    if (idx == arr.size())
    {
        vector<int> base(count, 0);
        return base;
    }
    if (arr[idx] == data)
    {
        count++;
    }
    vector<int> smallans = allIndex(arr, data, idx + 1, count);
    if (arr[idx] == data)
    {
        smallans[count - 1] = idx;
    }
    return smallans;
}
vector<int> printAllIndexes(vector<int> arr, int data)
{
    if (arr.size() == 0)
    {
        vector<int> base;
        return base;
    }
    vector<int> ans = allIndex(arr, data, 0, 0);
    return ans;
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {2, 10, 2, 10, 16, 7, 2, 8, 7, 2};
    vector<int> vec = printAllIndexes(arr, 7);
    for (auto it : vec)
    {
        cout << it << " ";
    }
}