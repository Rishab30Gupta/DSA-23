#include <bits/stdc++.h>
using namespace std;
bool findElementArray(vector<int> arr, int idx, int ele)
{
    if (idx == arr.size())
    {
        return false;
    }
    if (arr[idx] == ele)
    {
        return true;
    }
    return findElementArray(arr, idx + 1, ele);
}
bool findElement(vector<int> arr, int ele)
{
    if (arr.size() == 0)
    {
        return false;
    }
    return findElementArray(arr, 0, ele);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {11, 7, 3, 10, 14};

    int ele;
    cin >> ele;
    cout << findElement(arr, ele);
}