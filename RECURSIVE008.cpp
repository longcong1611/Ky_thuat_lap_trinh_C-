// Tính tổng các số nguyên tố trong khoảng cho trước
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

bool check(int n)
{
    if (n < 2)
        return 0;
    else
    {

        for (int i = 2; sqrt(n) >= i; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for (int i = a; i <= b; i++)
        {
            if (check(i))
                sum += i;
        }
        cout << sum << endl;
    }
}