// Giai thừa xấu xí
#include <bits/stdc++.h>
using namespace std;

long long clumsy(long long n)
{
   long long ans = 0;
   for (int i = n; i >= 1; i -= 4)
   {
      long long a = i, b = max(i - 1, 1), c = max(i - 2, 1);
      ans += (i == n ? 1 : -1) * a * b / c + max(0, i - 3);
   }
   return ans;
}
int main()
{
   int test;
   cin >> test;
   while (test--)
   {
      long long n;
      cin >> n;
      cout << clumsy(n) << endl;
   }
   return 0;
}