#include <bits/stdc++.h>
 
using namespace std;
string thuong(string sobichia, int sochia)
{
    string ans;
    int index = 0;
    int temp = sobichia[index] - '0';
    while (temp < sochia)
    {
        temp = temp * 10 + (sobichia[++index] - '0');
    }
    while (sobichia.size() > index)
    {
        ans += (temp / sochia) + '0';
        temp = (temp % sochia) * 10 + sobichia[++index] - '0';
    }
    if (ans.length() == 0)
        return 0;
    return ans;
}
int sodu(string s, int m)
{
    int dai = s.length();
    long long so, du = 0;
    for (int i = 0; i < dai; i++)
    {
        so = du * 10 + (s[i] - '0');
        du = so % m;
    }
    return du;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string n;
        long long m;
        cin >> n >> m;
        cout << thuong(n, m) << " " << sodu(n, m) << endl;
    }
    return 0;
}