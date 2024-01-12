// Số cách đặt quân hậu
#include <bits/stdc++.h>
using namespace std;

bool ktra(long long p, long long n)
{
	long long temp = p, count = 0, f = 5;
	while (f <= temp)
	{
		count += temp / f;
		f *= 5;
	}
	return (count >= n);
}
long long tim(long long n)
{
	if (n == 1)
		return 5;
	long long low = 0;
	long long high = 5 * n;
	while (low < high)
	{
		long long mid = (low + high) >> 1;
		if (ktra(mid, n))
			high = mid;
		else
			low = mid + 1;
	}
	return low;
}
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		long long n;
		cin >> n;
		cout << tim(n) << endl;
	}
	return 0;
}