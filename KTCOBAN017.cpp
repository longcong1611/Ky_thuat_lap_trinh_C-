// Dãy con liên tiếp có tổng lớn nhất
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

ll n, a[1000005], ans, sum;
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
        f(i, 1, n) cin >> a[i];
        ans = -INT_MAX, sum = 0;
        f(i, 1, n)
        {
            sum += a[i];
            if (sum > ans)
                ans = sum;
            if (sum < 0)
                sum = 0;
        }
        cout << ans << '\n';
    }
    return 0;
}