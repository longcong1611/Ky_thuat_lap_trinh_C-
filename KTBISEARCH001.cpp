// Tìm vị trí số x trong dãy số
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, m;
    cin >> n >> m;
    long a[n], b[m];
    for (long i = 0; i < n; i++)
        cin >> a[i];
    for (long i = 0; i < m; i++)
        cin >> b[i];
    for (long i = 0; i < m; i++)
    {
        long j = 0;
        while (j < n)
        {
            if (b[i] == a[j])
            {
                cout << j + 1 << " ";
                break;
            }
            j++;
        }
        if (j == n)
            cout << 0 << " ";
    }
    cout << endl;
    return 0;
}