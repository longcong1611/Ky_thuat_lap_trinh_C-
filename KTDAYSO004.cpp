// Dãy con đơn điệu tăng dài nhất
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f[n + 1], a[n + 1];
        f(i, 1, n) cin >> a[i];
        f[1] = 1;
        int res = 1;
        f(i, 2, n)
        {
            int l = 1, r = res, j = 0;
            while (l <= r)
            {
                int m = (l + r) / 2;
                if (a[i] > a[f[m]])
                {
                    j = m;
                    l = m + 1;
                }
                else
                    r = m - 1;
            }
            if (j == res)
                f[++res] = i;
            if (a[i] < a[f[j + 1]])
                f[j + 1] = i;
        }

        cout << res << endl;
    }
    return 0;
}