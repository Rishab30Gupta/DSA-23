#include <bits/stdc++.h>
using namespace std;
vector<string> getAllSubsequences(string str, int idx)
{
    if (idx == str.size())
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> myAns = getAllSubsequences(str, idx + 1);
    vector<string> res(myAns);
    for (auto it : myAns)
    {
        res.push_back(str[idx] + it);
    }
    return res;
}
vector<string> getSubsequence(string str)
{
    if (str.size() == 0)
    {
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> ans = getAllSubsequences(str, 0);
    return ans;
}
signed main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    string str;
    cin >> str;
    vector<string> ans = getSubsequence(str);
    for (auto it : ans)
        cout << it << " ";
}