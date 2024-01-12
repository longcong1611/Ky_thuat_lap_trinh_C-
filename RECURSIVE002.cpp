// Tính giai thừa của một số nhất định
#include <bits/stdc++.h>
using namespace std;

int factorials(int n)
{
    if (n == 0)
        return 1;
    return n * factorials(n - 1);
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cout << factorials(n) << endl;
    }
    return 0;
}