// Mật khẩu hợp lệ
#include <bits/stdc++.h>
using namespace std;

bool same(string s)
{
    for (int i = 1; i <= s.length() - 1; i++)
    {
        if (s[i - 1] == s[i])
            return 0;
    }
    return 1;
}
bool check(string s)
{
    int a[4] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            a[0]++;
        if (s[i] >= 'a' && s[i] <= 'z')
            a[1]++;
        if (s[i] >= 'A' && s[i] <= 'Z')
            a[2]++;
        if (ispunct(s[i]))
            a[3]++;
    }
    for (int i = 0; i <= 3; i++)
    {
        if (a[i] == 0)
            return 0;
    }
    return 1;
}
bool solve(string s)
{
    if (s.length() >= 8 && check(s) && same(s))
        return 1;
    else
        return 0;
}
int main()
{
    ifstream ip("password.in");
    ofstream op("res.out");
    string s;
    while (ip >> s)
    {
        if (solve(s))
        {
            op << "VALID" << endl;
        }
        else
            op << "INVALID" << endl;
    }
    return 0;
}