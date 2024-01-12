// Đếm số 0 liên tiếp cuối n!
#include <bits/stdc++.h>
using namespace std;

long long so0(long long n)
{
    if (n == 0)
        return 0;
    int k = 1;
    long long tong = 0;
    while (pow(5, k) <= n)
    {
        tong += n / pow(5, k);
        k += 1;
    }
    return tong;
}
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        long long n;
        cin >> n;
        cout << so0(n) << endl;
    }
    return 0;
}