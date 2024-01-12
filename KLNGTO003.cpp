#include <bits/stdc++.h>
using namespace std;

bool nto(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
long long songto(long long N)
{
    if (N <= 1)
        return 5;
    long long prime = N - 1;
    bool tiep = false;
    while (!tiep)
    {
        prime++;
        if (nto(prime) && nto(prime - 2))
            tiep = true;
    }
    return prime;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << songto(n) << endl;
    }
}