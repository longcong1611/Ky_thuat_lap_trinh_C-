#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long x, n, tich = 1;
        cin >> x;
        n = x;
        if (n % 2 == 0)
        {
            tich *= 2;
            while (n % 2 == 0)
            {
                n /= 2;
            }
        }
        for (long long i = 3; i*i <= n; i += 2)
        {
            if (n % i == 0)
                tich *= i;
                while (n % i == 0)
                {
                    n /= i;
                }              
            if (n == 1)
                break;    
        }
        if (tich < x) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;   
}