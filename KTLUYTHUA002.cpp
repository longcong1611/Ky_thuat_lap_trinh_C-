// Tính lũy thừa a^n mod 10^9+7
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int t;
ll a, n;
ll tinh(ll a, ll n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
    {
        ll tmp = tinh(a, n / 2);
        return (tmp * tmp) % MOD;
    }
    else
    {
        ll tmp = tinh(a, n / 2);
        return ((tmp * tmp) % MOD * a) % MOD;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> a >> n;
        cout << tinh(a, n) << '\n';
    }
    return 0;
}