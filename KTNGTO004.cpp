// Ước nguyên tố lớn nhất
#include <bits/stdc++.h>
using namespace std;

long long largest_prime_factor(long long N)
{
    long long largest_prime = -1;
    while (N % 2 == 0)
    {
        largest_prime = 2;
        N /= 2;
    }
    for (long long i = 3; i <= sqrt(N); i += 2)
    {
        while (N % i == 0)
        {
            largest_prime = i;
            N /= i;
        }
    }
    if (N > 2)
    {
        largest_prime = N;
    }

    return largest_prime;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << largest_prime_factor(n) << endl;
    }
    return 0;
}