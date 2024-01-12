// Tính ước chung lớn nhất của 2 số
#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if (y != 0)
        return gcd(y, x % y);
    else
        return x;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        cin >> x >> y;
        cout << gcd(x, y) << endl;
    }
    return 0;
}