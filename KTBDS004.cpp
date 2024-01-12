// Biểu diễn số thành tổng K số fibonacci
#include <bits/stdc++.h>
using namespace std;

// Toi da 42 chu so trong day Fibonacci
int fib[43] = {0};
void fibonacci()
{
    fib[0] = 1;
    fib[1] = 2;
    for (int i = 2; i < 43; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
}

// De quy tim so cach bieu dien
int rec(int x, int y, int last)
{
    if (y == 0)
    {
        if (x == 0)
            return 1;
        return 0;
    }
    int sum = 0;
    for (int i = last; i >= 0 and fib[i] * y >= x; i--)
    {
        if (fib[i] > x)
            continue;
        sum += rec(x - fib[i], y - 1, i);
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fibonacci();
        int n, k;
        cin >> n >> k;
        cout << rec(n, k, 42) << endl;
    }
    return 0;
}