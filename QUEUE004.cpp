// Đếm số lượng các array con bị ràng buộc cố định
#include <bits/stdc++.h>
using namespace std;

long long countSubarrays(vector<int> &a, int minK, int maxK)
{
    long long ans = 0;
    for (int l = 0, r; l < a.size();)
        if (a[l] >= minK and a[l] <= maxK)
        {
            queue<int> x, y;
            for (r = l; r < a.size() && a[r] >= minK && a[r] <= maxK; ++r)
            {
                if (a[r] == minK)
                    x.push(r);
                if (a[r] == maxK)
                    y.push(r);
            }
            for (int i = l; i < r && x.size() && y.size(); ++i)
            {
                if (x.front() < i)
                    x.pop();
                if (y.front() < i)
                    y.pop();
                if (x.size() && y.size())
                {
                    ans += r - (max(x.front(), y.front()));
                }
            }
            l = r;
        }
        else
        {
            ++l;
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
        int minK, maxK;
        cin >> s >> minK >> maxK;
        vector<int> a;
        for (char c : s)
        {
            if (isdigit(c))
                a.push_back(c - '0');
        }
        cout << countSubarrays(a, minK, maxK) << endl;
    }
    return 0;
}