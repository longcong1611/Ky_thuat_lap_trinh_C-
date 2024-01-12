// Biểu diễn số 01
#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

long long bds(long long n)
{
    long long a[n + 3];
    memset(a, 0, sizeof(a));
    a[0] = 1;
    for (long long k = n; k >= 1; k--)
    {
        for (long long i = 0; i <= n; i++)
        {
            if (i > k - 1)
                a[i] = a[i] + a[i - k];
            a[i] %= MOD;
        }
    }
    return a[n] - 1;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        long long res = bds(n);
        cout << res << endl;
    }
    return 0;
}