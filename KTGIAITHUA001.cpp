// Giai thừa số lớn
#include <bits/stdc++.h>
using namespace std;

vector<char> phepnhan(vector<char> a, vector<char> b)
{
    vector<int> c(a.size() + b.size(), 0);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            c[i + j] += (a[i] - '0') * (b[j] - '0');
            if (c[i + j] >= 10)
            {
                c[i + j + 1] += c[i + j] / 10;
                c[i + j] %= 10;
            }
        }
    }
    while (!c.empty() && c.back() == 0)
    {
        c.pop_back();
    }
    vector<char> dapan;
    for (int i = 0; i < c.size(); i++)
    {
        dapan.push_back(c[i] + '0');
    }
    return dapan;
}

int n;
vector<vector<char>> res(10001);

void tinh()
{
    res[0] = {'1'};
    for (int i = 1; i <= 10000; i++)
    {
        vector<char> tmp;
        int j = i;
        while (j > 0)
        {
            tmp.push_back((j % 10) + '0');
            j /= 10;
        }
        res[i] = phepnhan(tmp, res[i - 1]);
    }
}

int main()
{
    tinh();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = res[n].size() - 1; i >= 0; i--)
        {
            cout << res[n][i];
        }
        cout << endl;
    }
    return 0;
}