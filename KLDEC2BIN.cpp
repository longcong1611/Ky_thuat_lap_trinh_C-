#include <bits/stdc++.h>

using namespace std;
string tento2(long long n)
{
    string result = "";
    while (n > 0)
    {
        int base2 = n % 2;
        result = char('0' + base2) + result;
        n /= 2;
    }
    return result;
}
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        long long n;
        cin >> n;
        string base = tento2(n);
        cout << base << endl;
    }
    return 0;
}