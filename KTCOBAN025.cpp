// Số Catalan thứ n
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

ll c[32], n, t;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    c[0] = 1, c[1] = 1;
    for (int i = 1; i <= 30; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            c[i + 1] += c[j] * c[i - j];
        }
    }
    while (t--)
    {
        cin >> n;
        cout << c[n] << '\n';
    }
    return 0;
}