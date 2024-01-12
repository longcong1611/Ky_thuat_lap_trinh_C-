#include <bits/stdc++.h>

using namespace std;
bool songuyento(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n, sum = 0;
        cin >> n;
        if (n < 2)
            cout << 0 << endl;
        else if (songuyento(n))
        {
            cout << 1 << endl;
        }
        else
        {
            for (long long i = 2; i <= n / 2; i++)
            {
                if(n % i == 0 && songuyento(i))
                    sum++;
            }
            cout << sum << endl;
        }
    }
    return 0;
}