// Tìm số có ước nguyên tố lớn nhất
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int snt(int n)
{
    if (n == 1 || n == 0)
        return 0;
    if (n % 2 == 0)
        return 0;
    if (n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; ++i)
    {
        if (n % i == 0)
            return 0;
        if (n % (i + 2) == 0)
            return 0;
    }
    return 1;
}
int check(int n)
{
    int ans = 0;
    if (n == 1 || n == 0)
        return 0;
    while (n % 2 == 0)
        ans = 2, n /= 2;
    while (n % 3 == 0)
        ans = 3, n /= 3;
    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
            ans = i, n /= i;
        while (n % (i + 2) == 0)
            ans = i + 2, n /= (i + 2);
    }
    if (n > 4)
        ans = n;
    return n;
}
void implement()
{
    int l, r;
    cin >> l >> r;
    for (int i = r; i >= l; --i)
    {
        if (snt(i))
        {
            cout << i;
            return;
        }
    }
    set<int> st;
    for (int i = r; i >= l; --i)
    {
        st.insert(check(i));
    }
    if (!st.empty())
    {
        cout << *st.rbegin();
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        implement();
        cout << endl;
    }
    return 0;
}