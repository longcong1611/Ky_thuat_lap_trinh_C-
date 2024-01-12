#include <bits/stdc++.h>
using namespace std;

bool ktra(long long n)
{
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 ==0 || n % 3 == 0) return false;
    for (long long i = 5; i*i <= n; i += 6)
        if (n % i ==0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, m;
        cin >> n >> m;
        int dem = 0;
        for (long long i = n; i <= m; i++)
        {
            if (ktra(i))
            {   
                dem++;
                i++;
            }
        }
        cout << dem << endl;
    }
    return 0;
}