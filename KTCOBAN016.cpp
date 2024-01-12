// Bình phương số lớn
#include <bits/stdc++.h>
using namespace std;

void lon9(int n, bool mot = 1)
{
	if(n > 9)
	{
		cout << "123456790";
		lon9(n-9, 0);
		cout << "098765432";
		if (mot) cout << 1;
	}
	else {
		if (n==1) return;
		for (int i = 1; i <= n; i++)
		{
			cout << i;
		}
		for (int i = n-1; i > 1; i--)
		{
			cout << i;
		}
		return;
	}
}
void nho9(int n)
{
	if (n == 1)
	{
		cout << 1;
		return;
	}
	for (int i = 1; i<= n; i++)
	{
		cout << i;
	}
	for (int i = n-1; i > 0; i--)
	{
		cout << i;
	}
	return;
}
int main()
{
	int test;
	cin >> test;
	while (test--)
	{
		long long n;
		cin >> n;
		if (n > 9) lon9(n);
		else nho9(n);
		cout << endl;
	}
	return 0;
}