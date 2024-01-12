// Số bước tối thiểu để giảm số n về 1 theo điều kiện cho trước
#include <bits/stdc++.h>
using namespace std;

int minSteps(int n, vector<int> &memo)
{
    if (n == 1)
        return 0;

    if (memo[n] != -1)
        return memo[n];

    int steps = 1 + minSteps(n - 1, memo);
    if (n % 2 == 0)
        steps = min(steps, 1 + minSteps(n / 2, memo));
    if (n % 3 == 0)
        steps = min(steps, 1 + minSteps(n / 3, memo));

    memo[n] = steps;
    return steps;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        vector<int> memo(10001, -1);
        int n;
        cin >> n;
        cout << minSteps(n, memo) << endl;
    }
    return 0;
}