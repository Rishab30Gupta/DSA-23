#include <bits/stdc++.h>
using namespace std;
int lIndex(vector<int> arr, int idx, int data)
{
    if (idx == arr.size())
    {
        return -1;
    }
    int smallAns = lIndex(arr, idx + 1, data);
    if (smallAns != -1)
    {
        return smallAns;
    }
    return arr[idx] == data ? idx : -1;
}
int lastIndex(vector<int> arr, int data)
{
    if (arr.size() == 0)
    {
        return -1;
    }
    return lIndex(arr, 0, data);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {2, 10, 2, 10, 16, 7, 2, 8, 2};
    cout << lastIndex(arr, 2);
}