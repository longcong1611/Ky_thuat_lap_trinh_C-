// Chuỗi đối xứng
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(string s)
{
    queue<char> q;
    int n = s.size();
    for (int i = 0; i < n; ++i)
    {
        q.push(s[i]);
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (q.front() != s[i])
        {
            return false;
        }
        q.pop();
    }
    return true;
}
void implement()
{
    string s;
    cin >> s;
    cout << check(s) ? 1 : 0;
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