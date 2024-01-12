// Biếu diễn số N dưới dạng tổng của 2 số fibonacci
#include <bits/stdc++.h>
#define max 10000000
using namespace std;

long A[max];
void fibo()
{
    A[0] = 0;
    A[1] = 1;
    long a1 = 0, a2 = 1;
    long i = 2, a;
    while (i <= max)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        A[i] = a;
        i++;
    }
}
int main()
{
    int test;
    cin >> test;
    fibo();
    while (test--)
    {
        long n;
        cin >> n;
        long dem = 0;
        for (long i = 0; i < n; i++)
        {
            for (int j = n; j > i; j--)
            {
                if (A[i] + A[j] == n)
                {
                    dem++;
                    cout << A[i] << " " << A[j] << endl;
                    break;
                }
                if (dem == 1)
                    break;
            }
        }
        if (dem == 0)
            cout << -1 << endl;
    }
    return 0;
}