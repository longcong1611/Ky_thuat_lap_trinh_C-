// Số lượng nguyên tử
#include <bits/stdc++.h>
using namespace std;

map<string, int> parseFormula(string formula, int &index)
{
    map<string, int> elementCounts;
    while (index < formula.length())
    {
        if (isalpha(formula[index]))
        {
            string element;
            element += formula[index++];
            while (index < formula.length() && islower(formula[index]))
            {
                element += formula[index++];
            }
            int count = 0;
            while (index < formula.length() && isdigit(formula[index]))
            {
                count = count * 10 + (formula[index++] - '0');
            }
            if (count == 0)
            {
                count = 1;
            }
            elementCounts[element] += count;
        }
        else if (formula[index] == '(')
        {
            index++;
            map<string, int> subCounts = parseFormula(formula, index);
            int count = 0;
            while (index < formula.length() && isdigit(formula[index]))
            {
                count = count * 10 + (formula[index++] - '0');
            }
            if (count == 0)
            {
                count = 1;
            }
            for (auto &elementCount : subCounts)
            {
                elementCounts[elementCount.first] += elementCount.second * count;
            }
        }
        else if (formula[index] == ')')
        {
            index++;
            break;
        }
    }
    return elementCounts;
}

string mapToFormula(const map<string, int> &elementCounts)
{
    string result;
    for (const auto &elementCount : elementCounts)
    {
        result += elementCount.first;
        if (elementCount.second > 1)
        {
            result += to_string(elementCount.second);
        }
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string formula;
        getline(cin, formula);

        stack<map<string, int>> formulaStack;
        formulaStack.push({});
        int index = 0;
        while (index < formula.length())
        {
            if (isalpha(formula[index]) || formula[index] == '(')
            {
                map<string, int> elementCounts = parseFormula(formula, index);
                formulaStack.top().insert(elementCounts.begin(), elementCounts.end());
            }
            else if (formula[index] == ')')
            {
                index++; 
                int count = 0;
                while (index < formula.length() && isdigit(formula[index]))
                {
                    count = count * 10 + (formula[index++] - '0');
                }
                if (count == 0)
                {
                    count = 1;
                }
                map<string, int> subCounts = formulaStack.top();
                formulaStack.pop();
                for (auto &elementCount : subCounts)
                {
                    elementCount.second *= count;
                }
                formulaStack.top().insert(subCounts.begin(), subCounts.end());
            }
        }

        map<string, int> elementCounts = formulaStack.top();
        string result = mapToFormula(elementCounts);
        cout << result << endl;
    }

    return 0;
}