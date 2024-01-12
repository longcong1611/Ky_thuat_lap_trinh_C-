// Chiều dài tối thiểu của chuỗi sau khi loại bỏ các chuỗi con
#include <bits/stdc++.h>
using namespace std;

int minLength(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        while ((s.size() > i) and ((s[i - 1] == 'A' and s[i] == 'B') or (s[i - 1] == 'C' and s[i] == 'D')))
        {

            s.erase(s.begin() + (i - 1));
            s.erase(s.begin() + (i - 1));

            if (i > 1)
                i = i - 1;
        }
    }
    return s.size();
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        cout << minLength(s) << endl;
    }
    return 0;
}