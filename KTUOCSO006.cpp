// Cặp số bạn bè
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sum(ll n)
{
    if (n < 2)
        return 0;
    else
    {
        ll result = 0;
        ll m = sqrt(n);
        for (ll i = 1; i <= m; i++)
        {
            if (n % i == 0)
            {
                result += i + n / i;
            }
        }
        if (m * m == n)
        {
            result -= m;
        }
        return result - n;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll a, b;
        cin >> a >> b;
        if (sum(a) == b && sum(b) == a)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}