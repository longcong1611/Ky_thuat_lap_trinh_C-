// Tiền tố sang hậu tố
#include <bits/stdc++.h>
#define faster()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    stack<string> st;
    fn(i, s.length() - 1, 0)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            string tmp1 = st.top();
            st.pop();
            string tmp2 = st.top();
            st.pop();
            string tmp = tmp1 + tmp2 + s[i];
            st.push(tmp);
        }
        else
        {
            string tmp = "";
            tmp += s[i];
            st.push(tmp);
        }
    }
    cout << st.top() << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {

        solve();
    }
}