// Biểu diễn thành tổng của các số chẵn
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int power(int x, unsigned int y, int p)
{
    int res = 1;

    x = x % p;

    while (y > 0)
    {
        if (y & 1)
            res = (1LL * res * x) % p;

        y = y >> 1; // y = y/2
        x = (1LL * x * x) % p;
    }
    return res;
}

int countEvenWays(int n)
{
    return power(2, n / 2 - 1, MOD);
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
            cout << -1 << endl;
        else
            cout << countEvenWays(n) << endl;
    }
    return 0;
}