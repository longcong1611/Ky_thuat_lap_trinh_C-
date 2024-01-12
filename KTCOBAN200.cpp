// Mã cột trong file Excel
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream ip("input.txt");
    ofstream op("output.txt");
    long long n;
    while (ip >> n)
    {
        string res = "";
        while (n > 0)
        {
            n -= 1;
            char tmp = 'A' + (n % 26);
            res = tmp + res;
            n /= 26;
        }
        op << res << endl;
    }
    return 0;
}