// Phân chia dãy số
#include <bits/stdc++.h>
using namespace std;

int n, a[100];
map<int, int> dp;
long long sum, sum2, ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        ans = INT_MAX;
        for (int i = 1; i <= n; ++i)
            cin >> a[i], sum += a[i];
        sum2 = sum / 2;
        for (int i = 1; i <= sum2; ++i)
            dp[i] = 0;
        dp[0] = 1;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = sum2; j >= a[i]; --j)
            {
                if (dp[j - a[i]] == 1)
                    dp[j] = 1;
            }
        }
        for (int i = 0; i <= sum2; ++i)
        {
            if (dp[i] == 1)
                ans = min(ans, abs(sum - 2 * i));
        }
        cout << ans;
        cout << '\n';
    }
    return 0;
}