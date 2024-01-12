// Biểu diễn số thành tổng của các số chẵn
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int t, n, mx;
int dem(int n, int mx)
{
    if (n == 0 || mx == 0)
        return 1;
    if (n >= pow(2, mx))
        return dem(n - pow(2, mx), mx) + dem(n, mx - 1);
    else
        return dem(n, mx - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        mx = log2(n);
        cout << dem(n, mx) << '\n';
    }
    return 0;
}