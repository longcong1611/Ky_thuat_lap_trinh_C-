// Nhiệt độ hằng ngày
#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> daily(vector<int> &tempera)
{
    vector<int> res(tempera.size(), 0);
    stack<int> st;
    for (int i = 0; i < tempera.size(); ++i)
    {
        while (!st.empty() && tempera[i] > tempera[st.top()])
        {
            int prev = st.top();
            st.pop();
            res[prev] = i - prev;
        }
        st.push(i);
    }
    return res;
}

void implement()
{
    string s;
    cin >> s;
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
    vector<int> res = daily(vt);
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