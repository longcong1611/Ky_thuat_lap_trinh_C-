// Giải mã chuỗi
#include <bits/stdc++.h>
using namespace std;

string decodeString(string s)
{
    string curr;
    vector<int> nums;
    vector<string> strs;
    int n = 0;
    for (const auto &c : s)
    {
        if (isdigit(c))
        {
            n = n * 10 + c - '0';
        }
        else if (isalpha(c))
        {
            curr += c;
        }
        else if (c == '[')
        {
            nums.emplace_back(n);
            strs.emplace_back(curr);
            n = 0;
            curr.clear();
        }
        else if (c == ']')
        {
            for (; nums.back() > 0; --nums.back())
            {
                strs.back() += curr;
            }
            nums.pop_back();
            curr = move(strs.back());
            strs.pop_back();
        }
    }
    return curr;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        cout << decodeString(s) << endl;
    }

    return 0;
}