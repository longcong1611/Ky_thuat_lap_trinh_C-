#include <bits/stdc++.h>
using namespace std;
 
// Store perfect squares
// less than or equal to N
vector<int> psquare;
 
// Utility function to calculate
// perfect squares <= N
void calcPsquare(int N)
{
    for (int i = 1; i * i <= N; i++)
        psquare.push_back(i * i);
}
 
// DP array for memoization
vector<vector<int> > dp;
 
// Recursive function to count
// number of ways to represent
// a number as a sum of perfect squares
int countWaysUtil(int index, int target)
{
    // Handle base cases
    if (target == 0)
        return 1;
    if (index < 0 || target < 0)
        return 0;
 
    // If already computed, return the result
    if (dp[index][target] != -1)
        return dp[index][target];
 
    // Else, compute the result
    return dp[index][target]
           = countWaysUtil(
                 index, target - psquare[index])
 
             + countWaysUtil(
                   index - 1, target);
}
 
// Function to find the number of ways to
// represent a number as a sum of perfect squares
int countWays(int N)
{
    // Precalculate perfect squares less
    // than or equal to N
    calcPsquare(N);
 
    // Create dp array to memoize
    dp.resize(psquare.size() + 1,
              vector<int>(N + 1, -1));
 
    // Function call to fill dp array
    return countWaysUtil(psquare.size() - 1, N);
}
 
// Driver Code
int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int N;
        cin >> N;   
        cout << countWays(N) << endl;
    }
    return 0;
}