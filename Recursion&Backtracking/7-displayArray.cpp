#include <bits/stdc++.h>
using namespace std;
void printArray(vector<int> &arr, int idx)
{
    if (idx == arr.size())
    {
        return;
    }
    cout << arr[idx] << " ";
    printArray(arr, idx + 1);
}
void displayArray(vector<int> arr)
{
    printArray(arr, 0);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {3, 9, 10, 7, 5};
    displayArray(arr);
}