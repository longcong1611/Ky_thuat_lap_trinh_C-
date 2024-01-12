#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        long long n, sum = 1;
        cin >> n;
        if (n < 3)
            cout << 9 << endl;
        else if (n % 2 == 0)
        {
            sum = 9 * pow(10, (n / 2) - 1);
            cout << sum << endl;
        }
        else
        {
            sum = 9 * pow(10, n / 2);
            cout << sum << endl;
        }
    }
    return 0;
}