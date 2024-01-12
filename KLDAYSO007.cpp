#include <bits/stdc++.h>
using namespace std;

int dem(char numbers[], int start, int end, int tong = 0)
{
    if (start == end)
        return 1;
    int sum = 0;
    int res = 0;
    for (int i = start; i < end; i++)
    {
        sum += (numbers[i] - '0');
        if (sum >= tong)
            res += dem(numbers, i + 1, end, sum);
    }
    return res;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        char numbers[41];
        cin >> numbers;
        cout << dem(numbers, 0, n, 0) << endl;
    }
    return 0;
}