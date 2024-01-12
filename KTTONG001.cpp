// Tổng các số lẻ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long l, r;
        cin >> l >> r;
        if (l % 2 == 0)
            l = l + 1;
        if (r % 2 == 0)
            r = r - 1;
        long n = (r - l) / 2;
        long tong = ((n + 1) * (l + r)) / 2;
        cout << tong << endl;
    }
    return 0;
}