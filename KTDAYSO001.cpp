// Dãy cấp số cộng
#include <bits/stdc++.h>
using namespace std;

bool checkIsAP(long long arr[], long long n)
{
    if (n == 1)
        return false;
    int d = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
        if (arr[i] - arr[i - 1] != d)
            return false;

    return true;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long i;
        cin >> i;
        long long arr[i];
        for (long long k = 0; k < i; k++)
        {
            cin >> arr[k];
        }
        long long n = sizeof(arr) / sizeof(arr[0]);

        if (checkIsAP(arr, n))
            (cout << "YES" << endl);
        else
            (cout << "NO" << endl);
    }
    return 0;
}