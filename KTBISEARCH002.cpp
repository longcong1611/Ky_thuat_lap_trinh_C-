// Tìm kiếm trong dãy số
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int n, m, b[100005];
pair<int, int> a[100005];
int binarySearch(int x)
{
    int l = 1, r = n;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (a[mid].fi == x && a[mid - 1].fi < x)
            return mid;
        if (a[mid].fi >= x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    f(i, 1, n) cin >> a[i].fi, a[i].se = i;
    sort(a + 1, a + n + 1);
    f(i, 1, m) cin >> b[i];
    f(i, 1, m)
    {
        int x = binarySearch(b[i]);
        cout << a[x].se << " ";
    }
    return 0;
}