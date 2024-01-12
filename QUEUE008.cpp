// Đảo ngược chuỗi trong hàng đợi
#include <bits/stdc++.h>
using namespace std;
#define int long long

void implement()
{
    string s;
    cin >> s;
    queue<char> q;
    int n = s.size();
    for (int i = n - 1; i >= 0; --i)
    {
        q.push(s[i]);
    }
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
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