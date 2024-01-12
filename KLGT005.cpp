#include <bits/stdc++.h>
using namespace std;

float sinx(float x, int n)
{
    int a;
    if (n % 2 == 0)
        a = 1;
    else
        a = -1;
    float temp = 1;
    for (int i = 0; i <= 2 * n + 1; i++)
        temp = temp * x / i;
    return a * temp;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        float x, tong = 0;
        cin >> x;
        int n = 0;
        while (abs(sinx(x, n)) > 0.00001)
        {
            tong += sinx(x, n);
            n++;
        }
        cout << tong << endl;
    }
    return 0;
}