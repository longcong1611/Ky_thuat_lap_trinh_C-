#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long l, r;
        cin >> l >> r;
        long long tong = 0;
        tong = (r - l + 1) * (r + l) / 2;
        cout << tong << endl;
    }
    return 0;
}