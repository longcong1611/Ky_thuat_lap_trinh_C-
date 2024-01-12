#include <bits/stdc++.h>

using namespace std;
int main()
{
    unsigned int i;
    cin >> i;
    while (i--)
    {
        int x, y, m; // x: tiền socola, y: số vỏ cần để đổi, m: số tiền hiện có
        cin >> x >> y >> m;
        int n = m / x; // n: số hộp đã ăn
        if (n == 0)
            cout << n << endl;
        else
        {
            x = n; // x: số vỏ hộp
            while (x >= y)
            {
                n += x / y;
                x = (x / y) + (x % y);
            }
            cout << n << endl;
        }
    }
    return 0;
}