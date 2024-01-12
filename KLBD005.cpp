#include <bits/stdc++.h>
using namespace std;

vector<int> psquare;

void calcPsquare(int N)
{
    for (int i = 1; i * i <= N; i++)
        psquare.push_back(i * i);
}
int countWays(int index, int target)
{
    if (target == 0)
        return 1;

    if (index < 0 || target < 0)
        return 0;
    int inc = countWays(
        index, target - psquare[index]);

    int exc = countWays(index - 1, target);
    return inc + exc;
}
int main()

    int test;
    cin >> test;
    while (test--)
    {
        int N;
        cin >> N;
        calcPsquare(N);
        cout << countWays(psquare.size() - 1, N) << endl;
        psquare.clear();
    }
    return 0;

