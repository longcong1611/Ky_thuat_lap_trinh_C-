// Số chính phương
#include <bits/stdc++.h>
using namespace std;

bool chinhphuong(int n)
{
    return (pow((int)sqrt(n), 2) == n);
}
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int k;
        cin >> k;
        if (k == 1)
            cout << 1 << endl;
        else if (k % 2 == 1)
        {
            string s;
            s = '1';
            for (int m = 2; m <= k; m++)
            {
                s = s + '0';
            }
            cout << s << endl;
        }
        else
        {
            long long n = (int)sqrt(pow(10, k - 1)) + 1, m;
            while (n * n < pow(10, k))
            {
                m = n * n;
                while (m)
                {
                    if (chinhphuong(m % 10))
                        m /= 10;
                    else
                        break;
                }
                if (m == 0)
                {
                    break;
                }
                n++;
            }
            if (m == 0)
                cout << n * n << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}