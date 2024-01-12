// Loại bỏ ngôi sao khỏi chuỗi
#include <bits/stdc++.h>
using namespace std;

string removeStars(string s)
{
    int i = 0;
    int j = 1;
    while (j < s.length() && i < s.length())
    {
        if (s[j] != '*')
        {
            i++;
            j++;
        }
        else
        {
            s.erase(s.begin() + j);
            s.erase(s.begin() + i);
            i = max(0, i - 1);
            j = max(1, j - 1);
        }
    }
    return s;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        cout << removeStars(s) << endl;
    }
    return 0;
}