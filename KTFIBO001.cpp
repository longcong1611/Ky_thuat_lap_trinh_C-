// Tìm số thứ n không thuộc dãy fibonacci
#include <bits/stdc++.h>
using namespace std;

int nonFibonacci(int n)
{
    int prevPrev = 1, prev = 2, curr = 3;
    while (n > 0)
    {
        prevPrev = prev;
        prev = curr;
        curr = prevPrev + prev;
        n = n - (curr - prev - 1);
    }
    n = n + (curr - prev - 1);
    return prev + n;
}
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int n;
        cin >> n;
        cout << nonFibonacci(n) << endl;
    }
    return 0;
}