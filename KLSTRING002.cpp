#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string a, b, s;
        cin >> a >> b >> s;
        if (s[1] == '?')
        {
            if (s[2] == '?' || s[2] <= '3' && s[2] >= '0')
                s[1] = '2';
            else
                s[1] = '1';
        }
        if (s[2] == '?')
        {
            if (s[1] == '2')
                s[2] = '3';
            else
                s[2] = '9';
        }
        if (s[4] == '?')
            s[4] = '5';
        if (s[5] == '?')
            s[5] = '9';
        for (int i = 0; i < 7; i++)
            cout << s[i];
        cout << endl;
    }
    return 0;
}