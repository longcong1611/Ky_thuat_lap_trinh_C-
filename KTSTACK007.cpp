// Sửa lại dấu ngoặc
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int tc, z, ans;
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while (tc--)
    {
        cin >> s;
        ans = 0, z = 0;
        f(i, 0, s.length() - 1)
        {
            if (s[i] == '(')
                z++;
            else
            {
                if (z == 0)
                    ans++, z++;
                else
                    z--;
            }
        }
        ans += z / 2;
        cout << ans << '\n';
    }
    return 0;
}