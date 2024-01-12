// Số mũ lớn nhất của ước số
#include <bits/stdc++.h>
using namespace std;

long long somu(int n, int p)
{
    if (n == 1)
        return 0;
    int k = 1;
    long long tong = 0;
    while (pow(p, k) <= n)
    {
        tong += n / pow(p, k);
        k++;
    }
    return tong;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, p;
        cin >> n >> p;
        cout << somu(n, p) << endl;
    }
    return 0;
}