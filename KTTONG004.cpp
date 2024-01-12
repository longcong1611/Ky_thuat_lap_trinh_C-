// Tổng lũy thừa bậc n
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[m];
    for (int i = 0; i < m; i++)
    {
        int dem = 1;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                cout << dem << " ";
                break;
            }
            dem++;
        }
        if (dem == n)
            cout << dem << " ";
    }
    return 0;
}
