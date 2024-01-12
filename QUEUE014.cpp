// Kiểm tra xem hai hàng đợi có giống nhau hay không
#include <bits/stdc++.h>
using namespace std;

bool check1(queue<int> &v1, queue<int> &v2)
{
    // Kiểm tra số lượng phần tử
    if (v1.size() != v2.size())
    {
        return false;
    }

    // So sánh từng phần tử tương ứng của hai queue
    while (!v1.empty())
    {
        if (v1.front() != v2.front())
        {
            return false;
        }
        v1.pop();
        v2.pop();
    }

    return true;
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

    cout << check1(vt1, vt2) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        implement();
    }
    return 0;
}