// Tính số sau khi lũy thừa của một số nào đó
#include <bits/stdc++.h>
using namespace std;

double power(double x, int n)
{
    // Nếu n bằng 0, trả về 1
    if (n == 0)
    {
        return 1;
    }
    // Nếu n âm, trả về 1/x^(|n|)
    if (n < 0)
    {
        return 1 / power(x, -n);
    }
    // Nếu n chẵn, trả về (x^(n/2))^2
    if (n % 2 == 0)
    {
        double y = power(x, n / 2);
        return y * y;
    }
    // Nếu n lẻ, trả về x * (x^(n-1))
    else
    {
        return x * power(x, n - 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        cout << power(x, n) << endl;
    }
    return 0;
}