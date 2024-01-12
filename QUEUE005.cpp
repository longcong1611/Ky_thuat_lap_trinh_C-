// Số lần ít nhất để đảo chuỗi bit nhất định
#include <bits/stdc++.h>
using namespace std;

int minKBitFlips(vector<int> &a, int k)
{
    int n = a.size(), ans = 0;
    for (int cnt = 0, i = 0; i < n; ++i)
    {
        if (i >= k)
            cnt ^= a[i - k];
        if (!(cnt ^ a[i]))
        {
            if (i + k > n)
                return -1;
            ++ans;
            cnt ^= 1;
            a[i] = 1;
        }
        else
            a[i] = 0;
    }
    return ans;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        int k;
        cin >> s >> k;
        vector<int> a;
        for (char c : s)
        {
            if (isdigit(c))
                a.push_back(c - '0');
        }
        cout << minKBitFlips(a, k) << endl;
    }
    return 0;
}