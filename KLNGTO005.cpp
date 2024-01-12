#include <bits/stdc++.h>
using namespace std;

long long check[100000005] = {0};
void nguyento()
{
   check[0] = check[1] = 1;
   for (long long i = 2; i <= 100000005; i++)
      if (check[i] == 0)
         for (long long j = i * 2; j <= 100000005; j += i)
            check[i] = i;
}
long long sdb(long long n)
{
   for (long long i = 0; i <= n; i++)
   {
      if (check[i] == 0)
      {
         if (i > sqrt(i))
            return i;
      }
      else if (check[i] > sqrt(i))
         return i;
   }
}
int main()
{
   int test;
   cin >> test;
   while (test--)
   {
      long long n;
      cin >> n;
      cout << sdb(n) << endl;
   }
   return 0;
}