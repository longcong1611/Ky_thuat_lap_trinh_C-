// Liệt kê các cách phân tích số thành tích các số tự nhiên khác 1
#include <bits/stdc++.h>
using namespace std;
#define int long long

// Hàm đệ quy để tìm tất cả các cách phân tích số
void factorize(int n, int i, vector<int> &factors, int &count, bool print)
{
    // Nếu n == 1 và factors có ít nhất 2 phần tử,
    // in ra (nếu print == true) và tăng count
    if (n == 1 && factors.size() > 1)
    {
        if (print)
        {
            for (int i = 0; i < factors.size(); i++)
            {
                cout << factors[i] << " ";
            }
            cout << endl;
        }
        count++;
        return;
    }

    for (int x = i; x <= n; x++)
    {
        if (n % x == 0)
        {
            factors.push_back(x);
            factorize(n / x, x, factors, count, print);
            factors.pop_back();
        }
    }
}

void implement()
{
    int n;
    cin >> n;
    vector<int> factors;
    int count = 0;
    // First run to count the possibilities
    factorize(n, 2, factors, count, false);
    // Output the count
    cout << count << endl;
    // Reset count for the second run
    count = 0;
    // Second run to print the possibilities
    factorize(n, 2, factors, count, true);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        implement();
    }
    return 0;
}