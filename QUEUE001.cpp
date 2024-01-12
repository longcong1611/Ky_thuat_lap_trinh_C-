// Lấy chữ cái đầu tiên không trùng lặp thuộc chuỗi
#include <bits/stdc++.h>
using namespace std;
#define int long long

int first_s(string s)
{
    unordered_map<char, int> mp;
    queue<pair<char, int>> q;
    for (int i = 0; i < s.length(); ++i)
    {
        char c = s[i];
        if (mp.find(c) == mp.end())
        {
            q.push({c, i});
            mp[c] = 1;
        }
        else
        {
            mp[c]++;
            while (!q.empty() && mp[q.front().first] > 1)
            {
                q.pop();
            }
        }
    }
    if (q.empty())
        return -1;
    return q.front().second;
}
void implement()
{
    string s;
    cin >> s;
    cout << first_s(s);
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        implement();
        cout << endl;
    }
    return 0;
}