#include <bits/stdc++.h>
using namespace std;
int fIndex(vector<int> arr, int idx, int data)
{
    if (idx == arr.size())
    {
        return -1;
    }
    if (arr[idx] == data)
    {
        return idx;
    }
    return fIndex(arr, idx + 1, data);
}
int firstIndex(vector<int> arr, int data)
{
    if (arr.size() == 0)
    {
        return -1;
    }
    return fIndex(arr, 0, data);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {2, 10, 2, 10, 16, 7, 2, 8, 2};
    cout << firstIndex(arr, 10);
}