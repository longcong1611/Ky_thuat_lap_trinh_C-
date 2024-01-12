// Bài toán người đi du lịch
#include <bits/stdc++.h>
using namespace std;

int n, m, ans = INT_MAX, cmin = INT_MAX;
int c[500][500], check[50], luu[50], truoc[500];
void Try(int k)
{
    for (int i = 2; i <= n; ++i)
    {
        if (check[i] == 0 && c[truoc[k - 1]][i] != 0)
        {
            check[i] = 1;
            luu[k] = luu[k - 1] + c[truoc[k - 1]][i];
            truoc[k] = i;
            if (k == (n - 1))
            {
                if (c[i][1])
                    ans = min(ans, luu[k] + c[i][1]);
            }
            else if (luu[k] + cmin * (n - k) < ans)
                Try(k + 1);
            check[i] = 0;
        }
    }
}

int main()
{
    int k, j, c0;
    truoc[0] = 1;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        cin >> k >> j >> c0;
        c[k][j] = c0;
        cmin = min(cmin, c0);
    }
    Try(1);
    cout << ans;
    return 0;
}