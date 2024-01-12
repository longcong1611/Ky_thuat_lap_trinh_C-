// Tổng các ước số khác nhau
#include <bits/stdc++.h>
using namespace std;

long long uocso(long long n, long long m)
{
    if (n == 1)
        return 0;
    if (m % n == 0)
        return 0;
    long long sum = n;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
            {
                if (m % i != 0)
                    sum += i;
                if (m % (n / i) != 0)
                    sum += n / i;
            }
            else if (m % i != 0)
                sum += i;
        }
    }
    return sum;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, m;
        cin >> n >> m;
        cout << uocso(n, m) << endl;
    }
    return 0;
}