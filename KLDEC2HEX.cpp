#include <bits/stdc++.h>
using namespace std;

string decToHexa(long long n)
{
    string ans = "";

    while (n != 0)
    {
        long long rem = 0;
        char ch;
        rem = n % 16;

        if (rem < 10)
        {
            ch = rem + 48;
        }
        else
        {
            ch = rem + 55;
        }
        ans += ch;
        n = n / 16;
    }
    long long i = 0, j = ans.size() - 1;
    while (i <= j)
    {
        swap(ans[i], ans[j]);
        i++;
        j--;
    }
    return ans;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        if (n == 0)
            cout << 0 << endl;
        else cout << decToHexa(n) << endl;
    }
    return 0;
}
