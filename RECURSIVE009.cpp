// Tìm số fibonacci tại vị trí cho trước
#include <bits/stdc++.h>
#define max 10000000
using namespace std;

long A[max];
void fibo()
{
   A[0] = 0;
   A[1] = 1;
   long a1 = 0, a2 = 1;
   long i = 2, a;
   while (i <= max)
   {
      a = a1 + a2;
      a1 = a2;
      a2 = a;
      A[i] = a;
      i++;
   }
}
int main()
{
   int test;
   cin >> test;
   fibo();
    while (test--)
    {
        long n;
        cin >> n;
        cout << A[n] << endl;
    }
    return 0;
}