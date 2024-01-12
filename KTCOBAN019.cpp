// Biến đổi số
#include <bits/stdc++.h>
using namespace std;

long long dem(long long n)
{
    if (n < 2)
        return n;
    long long result = 0;
    long long i = sqrt(n);
    result = 1 + min(n % 3 + dem(n / 3), min(n % 2 + dem(n / 2), n - i * i + dem(i)));
    return result;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << dem(n) << endl;
    }
    return 0;
}