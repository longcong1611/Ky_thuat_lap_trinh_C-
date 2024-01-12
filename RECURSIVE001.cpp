// Tính tổng các thành phần trong mảng
#include <bits/stdc++.h>
using namespace std;

long sum(vector<int> &num)
{
    if (num.empty())
        return 0;
    long sum = 0;
    for (int i = 0; i < num.size(); i++)
    {
        sum += num[i];
    }
    return sum;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        vector<int> v;
        stringstream ss(s);
        int num;
        char ch;
        while (ss >> num)
        {
            v.push_back(num);
            ss >> ch;
        }
        cout << sum(v) << endl;
    }
    return 0;
}