#include <bits/stdc++.h>

using namespace std;
long long evenFib(long n)
{
    if (n < 1)
        return n;
    if (n == 1)
        return 2;
    return ((4 * evenFib(n - 1)) +
            evenFib(n - 2));
}
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        long n, tong = 0;
        cin >> n;
        for (long t = 1; evenFib(t) <= n; t++)
        {
            tong += evenFib(t);
        }
        cout << tong << endl;
    }
    return 0;
}