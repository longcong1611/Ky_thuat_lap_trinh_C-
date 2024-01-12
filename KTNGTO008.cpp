// Bộ N số nguyên tố
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

int p, n, s, a[20], snt[505], c, k, check[505], z;
bool checknt(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    f(i, 2, sqrt(n)) if (n % i == 0) return 0;
    return 1;
}
void print()
{
    z = 1;
    f(i, 1, n) cout << snt[a[i]] << " ";
    cout << '\n';
}
void Try(int k, int sum)
{
    if (k == n + 1)
    {
        if (sum == s)
            print();
    }
    else
    {
        f(i, a[k - 1] + 1, c)
        {
            if (check[i] == 0)
            {
                if (sum + i <= s)
                {
                    check[i] = 1;
                    a[k] = i;
                    Try(k + 1, sum + snt[i]);
                    check[i] = 0;
                }
                else
                    break;
            }
        }
    }
}
int main()
{
    cin >> p >> n >> s;
    f(i, p + 1, s) if (checknt(i)) snt[++c] = i;
    Try(1, 0);
    if (z == 0)
        cout << -1;
    return 0;
}