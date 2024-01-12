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
        vector<int> giaithua;
        double sum = 0;
        for (int i = 1; ceil(sum) <= n; i++)
        {
            sum += log10(i);
            if (ceil(sum) == n)
                giaithua.push_back(i);
        }
        if (giaithua.empty()) cout << "NO" << endl;
        else
        {
            cout << giaithua.size() << " ";
            for (int x: giaithua) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}