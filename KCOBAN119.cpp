#include <bits/stdc++.h>
#define PI 3.14159265
#define base 27
#define fi first
#define se second

#define TASK "BINARY"

using namespace std;
typedef long long lli;
typedef long double lb;
typedef unsigned long long ull;
typedef pair<int, int> pa;
const long long mod = 1e9 + 7;
const long long oo = 1e15 + 7;
const int maxn = 1e6 + 1;
const int maxN = 1e3 + 1;
lli n;
int k;
lli dp[35][2][2][35];
string a;

lli calc(int pos, int kt1, int kt2, int dem)
{
    if (dp[pos][kt1][kt2][dem] != -1)
        return dp[pos][kt1][kt2][dem];
    if (pos >= a.length())
    {
        return dem == k;
    }
    lli res = 0;
    for (int d = 0; d <= 1; d++)
    {
        if (kt2 || d <= a[pos] - '0')
        {
            res += calc(pos + 1, kt1 || (d > 0), kt2 || (d < a[pos] - '0'), dem + (d == 0 && kt1));
        }
    }
    return dp[pos][kt1][kt2][dem] = res;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n >> k;
        if (k < 0)
        {
            cout << 0 << "\n";
            continue;
        }
        fill_n(&dp[0][0][0][0], 35 * 2 * 2 * 35, -1);
        a = "";
        while (n > 0)
        {
            a = (char)(n % 2 + '0') + a;
            n /= 2;
        }
        lli ans = calc(0, 0, 0, 0);
        if (k == 0)
            ans--;
        if (k == 1)
            ans++;
        cout << ans << "\n";
    }
    return 0;
}