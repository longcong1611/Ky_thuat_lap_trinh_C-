// Đếm số dãy con K phần tử có tổng nhỏ nhất
#include <bits/stdc++.h>
// #include<iostream>
using namespace std;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

void implement()
{
    int N, K;
    cin >> N >> K;
    vector<int> a(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }

    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(K + 1, vector<int>(N * 25 + 1, 0)));
    dp[0][0][0] = 1;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            for (int s = 0; s <= N * 25; s++)
            {
                dp[i][j][s] = dp[i - 1][j][s];
                if (j >= 1 && s >= a[i])
                {
                    dp[i][j][s] += dp[i - 1][j - 1][s - a[i]];
                }
            }
        }
    }

    for (int s = 0; s <= N * 25; s++)
    {
        if (dp[N][K][s] > 0)
        {
            cout << dp[N][K][s] << endl;
            break;
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
    }
    return 0;
}