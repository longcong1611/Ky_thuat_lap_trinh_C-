// Hàm mũ số lớn
#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
long long powerlong(long long x, long long n)
{
    long long result = 1;
    while (n)
    {
        if (n & 1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return result;
}
long long powerStrings(string sa, string sb)
{
    long long a = 0, b = 0;
    for (int i = 0; i < sa.length(); i++)
        a = (a * 10 + (sa[i] - '0')) % MOD;
    for (int i = 0; i < sb.length(); i++)
        b = (b * 10 + (sb[i] - '0')) % (MOD - 1);
    return powerlong(a, b);
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin.ignore();
        string sa, sb;
        cin >> sa >> sb;
        cout << powerStrings(sa, sb) << endl;
    }
    return 0;
}