#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i;
    cin >> i;
    while (i--)
    {
        int a, b;
        cin >> a >> b;
        do
        {
            int temp = a;
            a = b;
            b = temp;
        } while (a > b);

        int count[10] = {0};
        for (int i = a; i <= b; i++)
        {
            string s = to_string(i);
            for (int j = 0; j < s.length(); j++)
            {
                count[s[j] - '0']++;
            }
        }
        for (int j = 0; j < 10; j++)
        {
            cout << count[j] << " ";
        }
        cout << endl;
    }
    return 0;
}