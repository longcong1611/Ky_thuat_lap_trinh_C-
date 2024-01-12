// Loại bỏ trùng lặp trên chuỗi
#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string S)
{
    int nRemoved = 0;

    do
    {
        nRemoved = 0;
        for (int i = 0; i < S.size() - 1;)
        {
            if (S[i] == S[i + 1])
            {
                // remove from i, length 2
                // cout << S.size() << ", " << i << endl;
                S.erase(i, 2);
                i--;
                nRemoved++;
            }
            else
            {
                i++;
            }
        }
    } while (nRemoved > 0 && S.size() > 0);

    return S;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << removeDuplicates(s) << endl;
    }
    return 0;
}