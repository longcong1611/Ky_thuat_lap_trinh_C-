// Hiệu 2 số lớn theo phần bù của 10
#include <bits/stdc++.h>
using namespace std;

string sumBig(string a, string b)
{
    if (a.length() > b.length())
        swap(a, b);
    string str = "";
    int n1 = a.length(), n2 = b.length();

    int diff = n2 - n1;
    int carry = 0;
    for (int i = n1 - 1; i >= 0; i--)
    {
        int sum = ((a[i] - '0') + (b[i + diff] - '0') + carry);
        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (int i = n2 - n1 - 1; i >= 0; i--)
    {
        int sum = ((b[i] - '0') + carry);

        str.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry)
        str.push_back(carry + '0');
    reverse(str.begin(), str.end());

    return str;
}
string complement10(string v)
{
    string complement = "";
    for (int i = 0; i < v.size(); i++)
    {
        complement += '9' - v[i] + '0';
    }
    complement = sumBig(complement, "1");
    return complement;
}
string subtract(string a, string b)
{
    if (a.length() < b.length())
        swap(a, b);

    int l1 = a.length(), l2 = b.length();
    int diffLen = l1 - l2;

    for (int i = 0; i < diffLen; i++)
    {
        b = "0" + b;
    }
    string c = sumBig(a, complement10(b));
    if (c.length() > a.length())
    {
        string::iterator it;

        it = c.begin();

        c.erase(it);
        it = c.begin();

        while (*it == '0')
            c.erase(it);

        return c;
    }
    else
    {
        return complement10(c);
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << subtract(s1, s2) << endl;
    }
    return 0;
}