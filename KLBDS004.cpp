#include <bits/stdc++.h>
using namespace std;

int fib[43] = {0};
void fibonacci()
{
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 43; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}

int rec(int x, int y, int last)
{

    if (y == 0)
    {
        if (x == 0)
            return 1;
        return 0;
    }
    int sum = 0;

    for (int i = last; i >= 0 and (float) fib[i] * (float)y >= (float)x; i--)
    {
        if (fib[i] > x)
            continue;
        sum += rec(x - fib[i], y - 1, i);
    }
    return sum;
}

int main()
{
    int test;
    cin >> test;
    fibonacci();
    while (test--)
    {
        int num, k;
        cin >> num >> k;
        cout << rec(num, k, 42) << endl;
    }
    return 0;
}