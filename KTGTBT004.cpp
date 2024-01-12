// Biểu thức căn giai thừa
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        float x;
        cin >> n >> x;
        float sum = 0, k = 1;
        for (int i = 1; i <= n; i++)
        {
            k *= x;
            sum = sqrt(sum + k);
        }
        cout << fixed << setprecision(3) << sum << endl;
    }
    return 0;
}