// Tìm số lớn nhất trong hàng đợi
#include <bits/stdc++.h>
using namespace std;
#define int long long

int maxx(vector<int> vt)
{
    priority_queue<int> q;
    for (int x : vt)
    {
        q.push(x);
    }
    return q.top();
}
void implement()
{
    string s;
    cin >> s;
    vector<int> vt;
    string token;
    size_t pos = 0;
    while ((pos = s.find(",")) != string::npos)
    {
        token = s.substr(0, pos);
        vt.push_back(stoi(token));
        s.erase(0, pos + 1);
    }
    vt.push_back(stoi(s));
    cout << maxx(vt);
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