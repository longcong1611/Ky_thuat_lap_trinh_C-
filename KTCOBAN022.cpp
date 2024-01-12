// Mua sô cô la
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
        m = m / x; // m: số hộp đã ăn
        if (m == 0)
            cout << m << endl;
        else
        {
            x = m; // x: số vỏ hộp
            while (x >= y)
            {
                m += x / y;
                x = (x / y) + (x % y);
            }
            cout << m << endl;
        }
    }
    return 0;
}