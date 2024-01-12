#include <bits/stdc++.h>

using namespace std;
long long isPerfect(long long int n)
{
    if (n == 1)
        return 0;
    long long int sum = 1;
    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i * i != n)
                sum = sum + i + n / i;
            else
                sum = sum + i;
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
        long long n;
        cin >> n;
        cout << isPerfect(n) << endl;
    }
    return 0;
}