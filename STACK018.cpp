// Giá cuối cùng sau khi giảm giá trong cửa hàng
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> finalfrice(vector<int> &prices)
{
    int n = prices.size();
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
    {
        ans[i] = prices[i];
        for (int j = i + 1; j < n; ++j)
        {
            if (prices[j] <= prices[i])
            {
                ans[i] -= prices[j];
                break;
            }
        }
    }
    return ans;
}
void implement()
{
    string s;
    cin >> s;
    vector<int> vt;
    size_t pos = 0;
    string token;
    while (pos = (s.find(',')) != string::npos)
    {
        token = s.substr(0, pos);
        vt.push_back(stoi(token));
        s.erase(0, pos + 1);
    }
    vt.push_back(stoi(s));
    vector<int> ans = finalfrice(vt);
    for (int i = 0; i < ans.size(); ++i)
    {
        cout << ans[i];
        if (i < ans.size() - 1)
        {
            cout << ",";
        }
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