// Số đối xứng gần nhất
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int t, a[20], b[20], d[20], c;
ll n, m, x, y, z;
ll change(int f[])
{
    ll ans = 0;
    f(j, 1, c) ans = ans * 10 + f[j];
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        c = 0;
        m = n;
        stack<int> st;
        while (m != 0)
            st.push(m % 10), m /= 10;
        while (!st.empty())
            a[++c] = st.top(), st.pop();
        f(i, 1, c) b[i] = a[i], d[i] = a[i];
        m = 1;
        f(i, 1, c - 1) m *= 10;
        if (n == m)
        {
            cout << n - 1 << " " << n + 1 << '\n';
            continue;
        }
        f(i, c / 2 + 1, c) d[i] = d[c - i + 1];
        x = change(d);
        int nho = 0;
        if (a[(c + 1) / 2] == 9)
            nho = 1, a[(c + 1) / 2] = 0;
        else
            a[(c + 1) / 2]++;
        for (int i = (c - 1) / 2; i >= 1; --i)
        {
            a[i] += nho;
            if (a[i] == 10)
                a[i] = 0;
            else
                nho = 0;
        }
        f(i, c / 2 + 1, c) a[i] = a[c - i + 1];
        y = change(a);
        if (b[(c + 1) / 2] == 0)
            nho = 1, b[(c + 1) / 2] = 9;
        else
            b[(c + 1) / 2]--, nho = 0;
        for (int i = (c - 1) / 2; i >= 1; --i)
        {
            b[i] -= nho;
            if (b[i] == -1)
                b[i] = 9;
            else
                nho = 0;
        }
        f(i, c / 2 + 1, c) b[i] = b[c - i + 1];
        z = change(b);
        if (z % 10 == 0)
            z = 0;
        ll ax = abs(n - x), ay = abs(n - y), az = abs(n - z);
        if (ax < ay && ax < az)
            cout << x << '\n';
        if (ax < az && ax == ay)
            cout << x << " " << y << '\n';
        if (ax < ay && ax == az)
            cout << z << " " << x << '\n';
        if (ay < ax && ay < az)
            cout << y << '\n';
        if (ay < ax && ay == az)
            cout << z << " " << y << '\n';
        if (az < ax && az < ay)
            cout << z << '\n';
    }
    return 0;
}