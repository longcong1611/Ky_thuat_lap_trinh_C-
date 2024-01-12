// Bài toán cái túi
#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int w, int a[], int c[])
{
    int dp[n + 2][w + 2];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i - 1] <= j)
            {
                dp[i][j] = max(dp[i - 1][j], c[i - 1] + dp[i - 1][j - a[i - 1]]);
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp[n][w];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int a[n], c[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        cout << knapsack(n, w, a, c) << endl;
    }
}