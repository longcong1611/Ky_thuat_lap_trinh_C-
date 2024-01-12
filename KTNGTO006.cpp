// Tìm số đặc biệt lớn nhất
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int n, check[100005], u[100005], snt[100005], c, ans[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    check[1] = 1;
    for (int i = 2; i * i <= 100005; ++i)
    {
        if (check[i] == 0)
            for (int j = i * i; j <= 100005; j += i)
                check[j] = 1;
    }
    f(i, 1, 100005) if (check[i] == 0) snt[++c] = i;
    for (int i = c; i >= 1; i--)
    {
        for (int j = snt[i]; j <= 100005; j += snt[i])
            if (u[j] == 0)
                u[j] = snt[i];
    }
    f(i, 1, 100005)
    {
        if (u[i] > sqrt(i))
            ans[i] = i;
        else
            ans[i] = ans[i - 1];
    }
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 0)
            cout << -1 << '\n';
        else
            cout << ans[n] << '\n';
    }
    return 0;
}