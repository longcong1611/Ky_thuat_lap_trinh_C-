// Biểu diễn số 02
#include <bits/stdc++.h>
using namespace std;

long long dem(long long n, long long k)
{
    long long result = 1, j = 1;
    for (long long i = n + 1; i < n + k; i++)
    {
        result *= i;
        if (j < k)
            result /= j++;
    }
    return result;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, k;
        cin >> n >> k;
        cout << dem(n, k) << endl;
    }
    return 0;
}