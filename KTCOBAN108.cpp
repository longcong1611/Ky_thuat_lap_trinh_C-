// Số đặc biệt
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int t, dp[205][205], x, f[205];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> x;
        f[0] = 1;
        f(i, 1, 200) f[i] = (f[i - 1] * 10) % x;
        dp[0][0] = 0;
        dp[1][0] = 8 % x, dp[0][1] = 6 % x;
        f(i, 2, 200) dp[0][i] = (dp[0][i - 1] * 10 + 6) % x, dp[i][0] = (dp[i - 1][0] * 10 + 8) % x;
        f(i, 1, 200)
        {
            f(j, 1, 200 - i)
            {
                dp[i][j] = (dp[i][0] * f[j] + dp[0][j]) % x;
            }
        }
        int ans1 = 500, ans2 = 500;
        f(i, 0, 200)
        {
            f(j, 0, 200 - i)
            {
                if (dp[i][j] == 0 && (i + j) != 0)
                {
                    if (i + j < ans1 + ans2)
                        ans1 = i, ans2 = j;
                }
            }
        }
        if (ans1 == 500)
            cout << -1 << '\n';
        else
        {
            f(i, 1, ans1) cout << 8;
            f(i, 1, ans2) cout << 6;
            cout << '\n';
        }
    }
    return 0;
}