#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        long long gt = 1;
        float s = 0;
        for (int i = 1; i <= n; i++)
        {
            gt *= i;
            s += (float)gt;
            float can = 1.0 / (i + 1);
            s = pow(s, can);
        }
        cout << fixed << setprecision(3) << s << " " << endl;
    }
    return 0;
}