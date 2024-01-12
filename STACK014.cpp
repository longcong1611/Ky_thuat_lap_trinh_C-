// Kiểm tra từ có hợp lệ sau khi thay thế từ
#include <bits/stdc++.h>
using namespace std;

bool isValid(string S)
{
   string stack;
   for (const auto &c : S)
   {
      if (c == 'c')
      {
         if (stack.size() >= 2 &&
             stack[stack.length() - 2] == 'a' &&
             stack[stack.length() - 1] == 'b')
         {

            stack.pop_back();
            stack.pop_back();
         }
         else
         {
            return false;
         }
      }
      else
      {
         stack.push_back(c);
      }
   }
   return stack.empty();
}
int main()
{
   int test;
   cin >> test;
   while (test--)
   {
      string s;
      cin >> s;
      cout << isValid(s) << endl;
   }
   return 0;
}