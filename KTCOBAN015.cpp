// Tổ hợp k phần tử
#include <iostream>
using namespace std;

int x[11];
int C(int k, int n)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1)
        return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
void printArray(int a[], int n)
{
    cout << "[";
    for (int i = 1; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[n] << "]" << endl;
}
void dequy(int h, int k, int n)
{
    for (int i = x[h - 1] + 1; i <= n - (k - h); i++)
    {
        x[h] = i;
        if (h == k)
            printArray(x, k);
        else
        {
            dequy(h + 1, k, n);
        }
    }
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        x[0] = 0;
        cout << C(k, n) << endl;
        dequy(1, k, n);
    }
    return 0;
}