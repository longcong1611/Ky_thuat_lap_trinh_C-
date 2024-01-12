// Số các bộ số có tổng bằng S
#include <bits/stdc++.h>
using namespace std;

int result(int k, int s)
{
    int count = 0;

    // Neu s = 3k thi chi co 1 cach
    if (s == 3 * k)
        return 1;

    for (int i = 0; i <= k; i++)
    {
        int mn = min(k, s - i);
        for (int j = 0; j <= mn; j++)
        {
            int n = s - i - j;
            if (n <= k)
                count++;
        }
    }
    return count;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int k, s;
        cin >> k >> s;
        cout << result(k, s) << endl;
    }
    return 0;
}