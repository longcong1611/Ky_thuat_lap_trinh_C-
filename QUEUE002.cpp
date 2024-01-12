// Tính số lượng học sinh không được ăn
#include <bits/stdc++.h>
using namespace std;

int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    vector<int> s(2);
    for (auto x : students)
        ++s[x];
    for (auto x : sandwiches)
        if (s[x] == 0)
            return s[0] + s[1];
        else
            --s[x];
    return 0;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s, s1;
        cin >> s >> s1;
        vector<int> students;
        vector<int> sandwiches;
        for (char c : s)
        {
            if (isdigit(c))
                students.push_back(c - '0');
        }
        for (char c : s1)
        {
            if (isdigit(c))
                sandwiches.push_back(c - '0');
        }
        cout << countStudents(students, sandwiches) << endl;
    }
    return 0;
}