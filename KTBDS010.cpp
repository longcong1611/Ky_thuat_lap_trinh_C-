// Biểu diễn số thành tổng cảu các số 1 và 2
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i, a, b) for (int i = a; i <= b; ++i)
#define fn(i, a, b) for (int i = a; i >= b; --i)
const int MOD = 1e9 + 7;
using namespace std;

struct matrix
{
    long long c[2][2];
    matrix()
    {
        c[0][0] = 0;
        c[0][1] = 1;
        c[1][0] = 1;
        c[1][1] = 1;
    }
};
matrix operator*(matrix a, matrix b)
{
    matrix res;
    for (int i = 0; i <= 1; i++)
        for (int j = 0; j <= 1; j++)
        {
            res.c[i][j] = 0;
            for (int k = 0; k <= 1; k++)
                res.c[i][j] = (res.c[i][j] + a.c[i][k] * b.c[k][j]) % MOD;
        }
    return res;
}

matrix tinh(matrix a, long long n)
{
    if (n == 1)
        return a;
    if (n % 2 != 0)
        return tinh(a, n - 1) * a;
    matrix tmp = tinh(a, n / 2);
    return tmp * tmp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        matrix a;
        a = tinh(a, n + 1);
        cout << a.c[0][1] << '\n';
    }
    return 0;
}