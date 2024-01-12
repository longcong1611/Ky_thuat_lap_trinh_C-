// Tìm hợp của hai hàng đợi
#include <bits/stdc++.h>
using namespace std;
#define int long long

queue<int> uni(queue<int> &q1, queue<int> &q2)
{
    unordered_set<int> seen; // Dùng để kiểm tra sự tồn tại của phần tử
    queue<int> result;

    // Thêm tất cả các phần tử của q1 vào kết quả
    while (!q1.empty())
    {
        int val = q1.front();
        q1.pop();
        if (seen.find(val) == seen.end())
        {
            result.push(val);
            seen.insert(val);
        }
    }

    // Thêm phần tử từ q2 vào kết quả nếu chưa tồn tại
    while (!q2.empty())
    {
        int val = q2.front();
        q2.pop();
        if (seen.find(val) == seen.end())
        {
            result.push(val);
            seen.insert(val);
        }
    }

    return result;
}
void implement()
{
    string s1, s2;
    cin >> s1 >> s2;
    queue<int> vt1;
    string token;
    size_t pos = 0;
    while ((pos = s1.find(",")) != string::npos)
    {
        token = s1.substr(0, pos);
        vt1.push(stoi(token));
        s1.erase(0, pos + 1);
    }
    vt1.push(stoi(s1));
    queue<int> vt2;
    string token1;
    size_t pos1 = 0;
    while ((pos1 = s2.find(",")) != string::npos)
    {
        token1 = s2.substr(0, pos1);
        vt2.push(stoi(token1));
        s2.erase(0, pos1 + 1);
    }
    vt2.push(stoi(s2));
    queue<int> res = uni(vt1, vt2);
    while (!res.empty())
    {
        cout << res.front();
        res.pop();
        if (!res.empty())
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