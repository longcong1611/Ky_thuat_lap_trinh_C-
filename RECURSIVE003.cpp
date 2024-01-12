// Kiểm tra xem số đầu vào có phải là số mũ của 4 hay không
#include <bits/stdc++.h>
using namespace std;

bool powerOfFour(int n)
{
    if (n == 1)
        return true;
    if (n < 1 || n % 4 != 0)
        return false;
    return powerOfFour(n / 4);
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        cout << powerOfFour(n) << endl;
    }
    return 0;
}