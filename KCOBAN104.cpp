#include <bits/stdc++.h>
#include <string>

using namespace std;
string chuyen3sang5(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '3')
        {
            s[i] = '5';
        }
    }
    return s;
}
string chuyen5sang3(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '5')
        {
            s[i] = '3';
        }
    }
    return s;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string a, b;
        cin >> a >> b;
        cout << (stoi(chuyen5sang3(a)) + stoi(chuyen5sang3(b))) << " " << (stoi(chuyen3sang5(a)) + stoi(chuyen3sang5(b))) << endl;
    }
    return 0;
}