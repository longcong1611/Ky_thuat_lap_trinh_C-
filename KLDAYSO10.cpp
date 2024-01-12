#include <bits/stdc++.h>
using namespace std;

int main()
{
   int test;
   cin >> test;
   while (test--)
   {
      long long n, l;
      cin >> n >> l;
      long long sum = 0;
      for (long long i = 1; i < n; i++)
      {
         long long x;
         cin >> x;
         sum += x;
      }
      long long sum1 = (n + l * 2 - 1) * n / 2;
      long long res = sum1 - sum;
      cout << res << endl;
   }
   return 0;
}