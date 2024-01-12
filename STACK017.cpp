// Giải mã chuỗi ở chỉ mục nhất định
#include <bits/stdc++.h>
using namespace std;
#define int long long

char decode(string s, int k)
{
    int len = 0;
    for (char c : s)
    {
        if (isdigit(c))
        {
            len *= (c - '0');
        }
        else
        {
            ++len;
        }
    }
    for (int i = s.size() - 1; i >= 0; --i)
    {
        char c = s[i];
        if (isdigit(c))
        {
            len /= (c - '0');
            k %= len;
        }
        else
        {
            if (k == 0 || k == len)
            {
                return c;
            }
            --len;
        }
    }
    return ' ';
}
void implement()
{
    string s;
    int k;
    cin >> s >> k;
    cout << decode(s, k);
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