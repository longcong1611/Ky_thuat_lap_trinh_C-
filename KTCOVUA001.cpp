// Mã đi tuần
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int XX[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int YY[8] = {1, 2, 2, 1, -1, -2, -2, -1};
void dequy(vector<vector<bool>> &chess, int x, int y, int k, int n)
{
    if (k == 0)
        return;
    for (int i = 0; i < 8; i++)
    {
        int tx = x + XX[i];
        int ty = y + YY[i];
        if (tx >= 0 && tx < n && ty >= 0 && ty < n)
        {
            chess[tx][ty] = true;
            dequy(chess, tx, ty, k - 1, n);
        }
    }
}
int dem(int n, int k, int x, int y)
{
    vector<vector<bool>>
        chess(n, vector<bool>(n, false));
    chess[x][y] = true;
    dequy(chess, x, y, k, n);
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (chess[i][j] == true)
                dem++;
        }
    }
    return dem;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        cout << dem(n, k, x - 1, y - 1) << endl;
    }
}