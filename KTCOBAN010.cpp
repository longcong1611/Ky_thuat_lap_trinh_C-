// Lũy thừa dư
#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;
long long modulo(long long a, long long n)
{
    long long result = 1;
    while (n)
    {
        if (n % 2 == 1)
            result = result * a % mod;
        a = a * a % mod;
        n /= 2;
    }
    return result;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long a, n;
        cin >> a >> n;
        cout << modulo(a, n) << endl;
    }
    return 0;
}