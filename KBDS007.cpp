#include <bits/stdc++.h>

using namespace std;
int numberOfWays(int n, int k)
{
    if (n == 0)
        return 1; 
    if (k == 0)
        return 1;
    if (n >= pow(2, k)) {
        int curr_val = pow(2, k);
        return numberOfWays(n - curr_val, k)
               + numberOfWays(n, k - 1);
    }
    else
        return numberOfWays(n, k - 1);
}
int main()
{
    int i;
    cin >> i;
    while (i--)
    {    
        int n;
        cin >> n;
        int k = log2(n);    
        cout << numberOfWays(n, k) << endl;
    }
}