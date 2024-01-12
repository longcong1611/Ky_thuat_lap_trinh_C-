// Tính lũy thừa a^n
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int multiply(int x, int res[], int res_size)
{

    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;

        carry = prod / 10;
    }
    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
void power(int x, int n)
{
    if (n == 0)
    {
        cout << "1";
        return;
    }
    int res[MAX];
    int res_size = 0;
    int temp = x;
    while (temp != 0)
    {
        res[res_size++] = temp % 10;
        temp = temp / 10;
    }
    for (int i = 2; i <= n; i++)
        res_size = multiply(x, res, res_size);
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long x, y;
        cin >> x >> y;
        if (x == 0)
            cout << 0 << endl;
        else
        {
            power(x, y);
            cout << endl;
        }
    }
    return 0;
}