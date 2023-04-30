#include <bits/stdc++.h>
using namespace std;
void printReverse(vector<int> arr, int idx)
{
    if (idx == arr.size())
    {
        return;
    }
    printReverse(arr, idx + 1);
    cout << arr[idx] << " ";
}
void displayReverseArray(vector<int> arr)
{
    printReverse(arr, 0);
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr = {3, 9, 10, 7, 5};
    displayReverseArray(arr);
}