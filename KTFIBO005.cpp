// Biểu diễn số N dưới dạng tổng của các số fibonacci không lặp lại
#include <bits/stdc++.h>
using namespace std;

long long fib[101], dp1[101];
long long dp2[101], v[101];

void fibonacci()
{

    fib[1] = 1;
    fib[2] = 2;

    for (int i = 3; i <= 87; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int find(int num)
{
    int cnt = 0;

    for (int i = 87; i > 0; i--)
    {
        if (num >= fib[i])
        {
            v[cnt++] = i;
            num -= fib[i];
        }
    }

    reverse(v, v + cnt);

    dp1[0] = 1;
    dp2[0] = (v[0] - 1) / 2;

    for (int i = 1; i < cnt; i++)
    {

        dp1[i] = dp1[i - 1] + dp2[i - 1];

        dp2[i] = ((v[i] - v[i - 1]) / 2) * dp2[i - 1] + ((v[i] - v[i - 1] - 1) / 2) * dp1[i - 1];
    }

    return (dp1[cnt - 1] + dp2[cnt - 1]);
}
int main()
{
    int test;
    cin >> test;
    fibonacci();
    while (test--)
    {
        int num;
        cin >> num;
        cout << find(num) << endl;
    }
    return 0;
}