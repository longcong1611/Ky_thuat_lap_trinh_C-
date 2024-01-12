// Số cô đơn
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
        int a[n + 1];
        map<int, int> dem;
        f(i, 1, n) cin >> a[i], dem[a[i]]++;
        int cnt = 0;
        f(i, 1, n)
        {
            if (dem[a[i]] == 1)
                cnt++, dem[a[i]] = 0;
        }
        cout << cnt << endl;
    }
    return 0;
}