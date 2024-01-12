// Đếm số nguyên tố hoàn toàn
#include <bits/stdc++.h>
using namespace std;

bool digit(int n)
{
    while (n)
    {
        int s = n % 10;
        if (s != 2 && s != 3 && s != 5 && s != 7)
            return false;
        n /= 10;
    }
    return true;
}
bool check(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int dem = 0;
        for (int i = 2; i <= n; i++)
        {
            if (digit(i) && check(i))
                dem++;
        }
        cout << dem << endl;
    }
    return 0;
}