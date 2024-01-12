/*Giả sử cần tìm số A có N = 100 ước
100 = 5 / 5 / 2 / 2
=> A = 2^(5 - 1) * 3(5 - 1) * 5^(2 - 1) * 7(2 - 1) = 16 * 81 * 5 * 7
A = 45,360
*/
#include <bits/stdc++.h>

using namespace std;
bool songuyento(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long A = 1, N, j = 0, m = 0;
        cin >> N;
        long long a[10], b[10];
        for (long long i = 2; i < 10000000; i++)
        {
            if (songuyento(i))
            {  
                while (N % i == 0)
                {
                    a[j] = i;
                    j++;
                    N /= i;
                }
            }
            if (N == 1)
                break;
        }
        for (long long i = 2; i < 10000000; i++)
        {
            if (songuyento(i))
            {
                b[m] = i;
                m++;
            }
            if (m > j)
                break;
        }
        m = 0;
        while (j--)
        {
            A *= pow(b[m], a[j] - 1);    
            m++;        
        }
        cout << A << endl;
    }
    return 0;
}