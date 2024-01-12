// Đảo ngược chuỗi giữa các dấu ngoặc
#include <bits/stdc++.h>
using namespace std;

string reverseParentheses(string s)
{
   stack<int> stk;
   for (int i = 0; i < s.size(); ++i)
      if (s[i] == '(')
         stk.push(i);
      else if (s[i] == ')')
      {
         int p = stk.top();
         stk.pop();
         reverse(s.begin() + p + 1, s.begin() + i);
      }
   string ans;
   for (auto c : s)
      if (isalpha(c))
         ans.push_back(c);
   return ans;
}
int main()
{
   int test;
   cin >> test;
   while (test--)
   {
      string s;
      cin >> s;
      cout << reverseParentheses(s) << endl;
   }
   return 0;
}