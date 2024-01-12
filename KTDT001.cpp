// Tìm số cách biều diễn N thành tổng của hai số tự nhiên liên tiếp trở lên
#include <bits/stdc++.h>
using namespace std;

long long countConsecutive(long long N)
{
    long long count = 0;
    for (long long L = 1; L * (L + 1) < 2 * N; L++)
    {
        double a = (1.0 * N - (L * (L + 1)) / 2) / (L + 1);
        if (a - (long)a == 0.0)
            count++;
    }
    return count;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << countConsecutive(n) << endl;
    }

    return 0;
}