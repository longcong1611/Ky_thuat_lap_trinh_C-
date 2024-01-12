// Liệt kê hoán vị
#include <bits/stdc++.h>
#define MAX 20
using namespace std;

int n;
int Bool[MAX] = {0};
int A[MAX];

void xuat()
{
    for (int i = 1; i < n; i++)
        cout << A[i] << " ";
    cout << A[n] << endl;
}

void Try(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (!Bool[i])
        {
            A[k] = i;
            Bool[i] = 1;
            if (k == n)
                xuat();
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        cin >> n;
        Try(1);
    }
    return 0;
}