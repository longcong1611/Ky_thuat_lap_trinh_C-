// Biến đổi dương
#include <bits/stdc++.h>
using namespace std;

void check(int n)
{
    int a[n];
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > 0)
            cnt1++;
        else if (a[i] < 0)
            cnt2++;
        else
            cnt3++;
    }
    if (cnt1 == n || cnt2 == n)
        cout << 0 << endl;
    else if (cnt3 > 0)
        cout << -1 << endl;
    else
    {
        if (cnt1 >= cnt2)
            cout << cnt2 << endl;
        else
            cout << cnt1 << endl;
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        check(n);
    }
    return 0;
}