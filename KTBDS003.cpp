// Biểu diễn số 003
#include <bits/stdc++.h>
using namespace std;

long long dem(long long n, long long k)
{
    if (n < k)
        return 0;
    if (k == 1)
        return 1;
    long long count = n - 1;
    for (int i = 2; i <= k - 1; i++)
    {
        count *= n - i;
        count /= i;
    }
    return count;
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