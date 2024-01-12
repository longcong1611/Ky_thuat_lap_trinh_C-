// Ước nguyên tố
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long x;
        cin >> x;
        long long n = x, uoc = 2;
        int check = 1;
        while (n != 1)
        {
            int dem = 0;
            while (n % uoc == 0)
            {
                dem++;
                n /= uoc;
            }
            if (dem > 1)
            {
                check = 0;
                break;
            }
            uoc++;
            if (uoc > sqrt(n))
                break;
        }
        if (check == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}