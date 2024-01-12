// Đường đi có tổng lớn nhất
#include <bits/stdc++.h>
using namespace std;

#define e -99999
int a[101][101];
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int m, n;
        cin >> m >> n;
        int i, j;
        for (int i = 0; i <= n; i++)
        {
            a[0][i] = e;
            a[m + 1][i] = e;
        }
        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }

        for (j = 2; j <= n; j++)
        {
            for (i = 1; i <= m; i++)
            {
                a[i][j] += max(a[i - 1][j - 1], max(a[i][j - 1], a[i + 1][j - 1]));
            }
        }
        int result = e;
        for (i = 1; i <= m; i++)
        {
            result = max(result, a[i][n]);
        }
        cout << result << endl;
    }
    return 0;
}