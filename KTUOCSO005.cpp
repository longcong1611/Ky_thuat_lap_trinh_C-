// Phân tích số
#include <bits/stdc++.h>
const int MOD = 1e9 + 7;
using namespace std;

int t, ans;
long long n;
long long uoc[10005], sl[10005];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long m = n;
        ans = 0;
        if (m % 2 == 0)
        {
            ans++;
            while (m % 2 == 0)
            {
                m /= 2;
                uoc[ans] = 2;
                sl[ans]++;
            }
        }
        for (int i = 3; i <= sqrt(m); i += 2)
        {
            if (m % i == 0)
            {
                ans++;
                int dem = 0;
                while (m % i == 0)
                    m /= i, dem++;
                uoc[ans] = i, sl[ans] = dem;
            }
        }
        if (m != 1)
            uoc[++ans] = m, sl[ans] = 1;
        cout << ans << '\n';
        for (int i = 1; i <= ans; ++i)
            cout << uoc[i] << " " << sl[i] << '\n';
        for (int i = 1; i <= ans; ++i)
            uoc[i] = 0, sl[i] = 0;
    }

    return 0;
}