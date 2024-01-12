// Tìm giao của hai hàng đợi
#include <bits/stdc++.h>
using namespace std;
#define int long long

queue<int> findselec(queue<int> &q1, queue<int> &q2)
{
    unordered_set<int> seenInQ2;
    queue<int> result;

    // Đưa tất cả phần tử của q2 vào unordered_set
    while (!q2.empty())
    {
        seenInQ2.insert(q2.front());
        q2.pop();
    }

    // Duyệt qua q1 và kiểm tra xem phần tử đó có trong seenInQ2 không
    while (!q1.empty())
    {
        if (seenInQ2.find(q1.front()) != seenInQ2.end())
        {
            result.push(q1.front());
            seenInQ2.erase(q1.front());
        }
        q1.pop();
    }
    return result;
}

void implement()
{
    string s1, s2;
    cin >> s1 >> s2;
    queue<int> vt1, vt2;

    // Chuyển đổi chuỗi thành queue cho s1
    size_t pos = 0;
    string token;
    while ((pos = s1.find(",")) != string::npos)
    {
        token = s1.substr(0, pos);
        vt1.push(stoi(token));
        s1.erase(0, pos + 1);
    }
    vt1.push(stoi(s1));

    // Chuyển đổi chuỗi thành queue cho s2
    size_t pos1 = 0;
    string token1;
    while ((pos1 = s2.find(",")) != string::npos)
    {
        token1 = s2.substr(0, pos1);
        vt2.push(stoi(token1));
        s2.erase(0, pos1 + 1);
    }
    vt2.push(stoi(s2));

    // Tìm giao và in kết quả
    queue<int> res = findselec(vt1, vt2);
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