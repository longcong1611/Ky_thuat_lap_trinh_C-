// Danh sách số lớn nhất của mỗi lần trượt cửa số (sliding window)
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> maxslide(vector<int> &nums, int k)
{
    vector<int> res;
    deque<int> dq;
    for (int i = 0; i < nums.size(); ++i)
    {
        while (!dq.empty() && dq.front() < i - k + 1)
        {
            dq.pop_front();
        }
        while (!dq.empty() && nums[dq.back()] < nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i >= k - 1)
        {
            res.push_back(nums[dq.front()]);
        }
    }
    return res;
}
void implement()
{
    int k;
    string s;
    cin >> s >> k;
    vector<int> vt;
    size_t pos = 0;
    string token;
    while ((pos = s.find(',')) != string::npos)
    {
        token = s.substr(0, pos);
        vt.push_back(stoi(token));
        s.erase(0, pos + 1);
    }
    vt.push_back(stoi(s));
    vector<int> res = maxslide(vt, k);
    for (int i = 0; i < res.size(); ++i)
    {
        cout << res[i];
        if (i < res.size() - 1)
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