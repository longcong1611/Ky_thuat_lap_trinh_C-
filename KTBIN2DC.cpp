// Chuyển đổi nhị phân sang thập phân
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        unsigned long long ans = 0, tmp = 1;
        for (int i = s.length() - 1; i >= 0; --i)
        {
            if (s[i] == '1')
            {
                ans += tmp;
            }
            tmp = tmp << 1;
        }
        cout << ans << endl;
    }
    return 0;
}