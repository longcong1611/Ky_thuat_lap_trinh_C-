// Đếm số chính phương
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        long long a, b, x;
        cin >> a >> b;
        do
        {
            long long temp = a;
            a = b;
            b = temp;
        } while (a > b);
        if ((int)sqrt(a) * (int)sqrt(a) == a)
            x = (int)sqrt(b) - (int)sqrt(a) + 1;
        else
            x = (int)sqrt(b) - (int)sqrt(a);
        cout << x << endl;
    }
    return 0;
}