// Xóa dấu ngoặc đơn ngoài cùng
#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s)
{
   string ans;
   for (int i = 0, c = 0; i < s.size(); ++i)
   {
      int pre = c;
      c += s[i] == '(' ? 1 : -1;
      if (!((pre == 0 && c == 1) || (pre == 1 && c == 0)))
         ans.push_back(s[i]);
   }
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
      cout << removeOuterParentheses(s) << endl;
   }
   return 0;
}