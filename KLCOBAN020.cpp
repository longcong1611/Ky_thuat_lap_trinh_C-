#include <bits/stdc++.h>
using namespace std;
unsigned long long maxProd(unsigned long long N)
{
    if (N == 0)
        return 1;
    if (N < 10)
        return N;
    return max(maxProd(N / 10) * (N % 10), maxProd(N / 10 - 1) * 9);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n;
        cin >> n;
        cout << maxProd(n) << endl;
    }
    return 0;
}