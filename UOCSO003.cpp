#include <bits/stdc++.h>

using namespace std;
int isPerfect(long long int n)
{
	long long int sum = 1;
	for (long long int i=2; i*i<=n; i++)
	{
		if (n%i==0)
		{
			if(i*i!=n)
				sum = sum + i + n/i;
			else
				sum=sum+i;
		}
	}
	if (sum == n && n != 1)
		return 1;
	return 0;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << isPerfect(n) << endl;        
    }
    return 0;
}