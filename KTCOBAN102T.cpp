#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n % 28 == 1)
            cout << 6 << endl;
        else if (n % 28 == 2)
            cout << 16 << endl;
        else if (n % 28 == 3)
            cout << 8 << endl;
        else if (n % 28 == 4)
            cout << 10 << endl;
        else if (n % 28 == 5)
            cout << 25 << endl;
        else if (n % 28 == 6 || n % 28 == 15)
            cout << 7 << endl;
        else if (n % 28 == 7 || n % 28 == 16)
            cout << 14 << endl;
        else if (n % 28 == 8)
            cout << 3 << endl;
        else if (n % 28 == 9 || n % 28 == 26)
            cout << 23 << endl;
        else if (n % 28 == 10 || n % 28 == 12 || n % 28 == 18 || n % 28 == 22)
            cout << 17 << endl;
        else if (n % 28 == 11)
            cout << 13 << endl;
        else if (n % 28 == 12 || n % 28 == 27)
            cout << 0 << endl;
        else if (n % 28 == 14)
            cout << 27 << endl;
        else if (n % 28 == 17)
            cout << 15 << endl;
        else if (n % 28 == 19 || n % 28 == 20)
            cout << 26 << endl;
        else if (n % 28 == 21)
            cout << 20 << endl;
        else if (n % 28 == 23)
            cout << 9 << endl;
        else if (n % 28 == 24 || n % 28 == 25)
            cout << 22 << endl;
        else if (n % 28 == 0)
            cout << 1 << endl;
    }
    return 0;
}