// Quân tượng
#include <bits/stdc++.h>
using namespace std;

long long bishops(long long n)
{
    if (n < 1)
        return 0;
    else if (n == 1)
        return 1;
    else
        return 2 * (n - 1);
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << bishops(n) << endl;
    }
    return 0;
}