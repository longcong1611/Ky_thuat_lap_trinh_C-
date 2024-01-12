// Số phi fibonacci kế tiếp
#include <bits/stdc++.h>
using namespace std;

bool isFibonacci(long long N)
{
    if (N == 0 || N == 1)
        return true;
    long long a = 0, b = 1, c;
    while (true)
    {
        c = a + b;
        a = b;
        b = c;
        if (c == N)
            return true;
        else if (c >= N)
        {
            return false;
        }
    }
}
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        long long n, m;
        cin >> n;
        if (n <= 3)
            cout << '4' << endl;
        else if (isFibonacci(n))
            cout << n + 1 << endl;
        else if (isFibonacci(n + 1))
        {
            cout << n + 2 << endl;
        }
        else
            cout << n + 1 << endl;
    }
    return 0;
}