#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        float x0, x1, s;
        cin >> n >> x0;
        float can = 1, tong = 0;
        s = sqrt(x0);
        x1 = x0;
        if (n == 1)
            cout << fixed << setprecision(3) << s << " " << endl;
        else
        {
            for (int i = 2; i <= n; i++)
            {
                x1 *= x0;
                s = x1 + s;
                s = sqrt(s);
            }
            cout << fixed << setprecision(3) << s << " " << endl;
        }
    }
    return 0;
}