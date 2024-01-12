// Bòng chày
#include <bits/stdc++.h>
using namespace std;

int calpoint(const vector<string> &ops)
{
    stack<int> scores;

    for (const string &op : ops)
    {
        if (op == "+")
        {
            int top = scores.top();
            scores.pop();
            int newTop = top + scores.top();
            scores.push(top);
            scores.push(newTop);
        }
        else if (op == "D")
            scores.push(2 * scores.top());
        else if (op == "C")
            scores.pop();
        else
            scores.push(stoi(op));
    }
    int res = 0;
    while (!scores.empty())
    {
        res += scores.top();
        scores.pop();
    }
    return res;
}
void implement()
{
    string s;
    cin >> s;
    vector<string> vt;
    size_t pos = 0;
    string token;
    while ((pos = s.find(',')) != string::npos)
    {
        token = s.substr(0, pos);
        vt.push_back(token);
        s.erase(0, pos + 1);
    }
    vt.push_back(s);
    cout << calpoint(vt);
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