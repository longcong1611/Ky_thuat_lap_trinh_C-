#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        int a[10], b[10];
        int j = 0;
        if (n % 2 == 0)
        {
            a[j] = 2;
            int count = 0;
            while (n % 2 == 0)
            {
                count++;
                n /= 2;
            }
            b[j] = count;
            j++;
        }
        for (long long i = 3; i <= n; i += 2)
        {
            if (n % i == 0)
                {
                    a[j] = i;
                    int count = 0;
                    while (n % i == 0)
                    {
                        count++;
                        n /= i;
                    }
                    b[j] = count;
                    j++;
                }
            if (n == 1)
                break;    
        }
        cout << j << endl;
        for (int i = 0; i < j; i++)
        {
            cout << a[i] << " " << b[i] << endl;
        }    
    }
    return 0;
}