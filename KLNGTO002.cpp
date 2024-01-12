#include <bits/stdc++.h>
using namespace std;

int check[1000005], dem[1000005];
void sonto()
{
    check[1] = 1;
    for (int i = 2; i <= 1000000; i++)
        if (check[i] == 0)
            for (int j = i * 2; j < 1000000; j += i)
                check[j] = 1;
    for (int i = 1; i <= 1000000; i++)
    {
        if (check[i] == 0)
            dem[i] = dem[i - 1] + 1;
        else
            dem[i] = dem[i - 1];
    }
}
int main()
{
    int test, l, r;
    cin >> test;
    sonto();
    while (test--)
    {
        cin >> l >> r;
        cout << dem[r] - dem[l - 1] << endl;
    }
    return 0;
}