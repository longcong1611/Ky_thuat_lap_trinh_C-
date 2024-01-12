// Ngoặc hợp lệ
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    map<char, char> paren;
    paren['('] = ')';
    paren['{'] = '}';
    paren['['] = ']';

    set<char> keys = {'(', '{', '['};

    stack<char> stk;

    for (char c : s)
    {
        if (keys.find(c) != keys.end())
        { // left
            stk.push(c);
        }
        else if (!stk.empty() && paren[stk.top()] == c)
        { // right, match
            stk.pop();
        }
        else
        { // right, not match
            return false;
        }
    }

    return stk.empty();
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s1;
        cin >> s1;
        cout << isValid(s1) << endl;
    }
    return 0;
}