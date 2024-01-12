#include <bits/stdc++.h>
using namespace std;

bool checkDigits(int n)
{
    while (n)
    {
        int dig = n % 10;
        if (dig != 2 && dig != 3 &&
            dig != 5 && dig != 7)
            return false;

        n /= 10;
    }

    return true;
}
bool prime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}
int isFullPrime(int n)
{
    return (checkDigits(n) && prime(n));
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, count = 0;
        cin >> n;
        for (long long i = 2; i <= n; i++)
        {
            if (isFullPrime(i))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}