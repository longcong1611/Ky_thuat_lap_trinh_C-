// Ước lũy thừa 2 lớn nhất
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, ans = 0, temp = 2;
        cin >> n;
        while (temp <= n)
        {
            ans += n / temp;
            temp *= 2;
        }
        cout << ans << endl;
    }
    return 0;
}