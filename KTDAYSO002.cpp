// Dãy con K phần tử có tổng bằng S
#include <iostream>
#include <vector>
using namespace std;

int countSubsequences(vector<int> &A, int K, int S, int index, int count, int sum)
{
    // Nếu đã tìm được dãy con có K phần tử và tổng bằng S, tăng biến đếm
    if (count == K && sum == S)
    {
        return 1;
    }

    // Nếu đã duyệt hết tất cả các phần tử trong dãy A hoặc đã đủ K phần tử
    if (index == A.size() || count == K)
    {
        return 0;
    }

    // Không chọn phần tử tại vị trí index
    int notCount = countSubsequences(A, K, S, index + 1, count, sum);

    // Chọn phần tử tại vị trí index
    int countIndex = countSubsequences(A, K, S, index + 1, count + 1, sum + A[index]);

    return notCount + countIndex;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, K, S;
        cin >> N >> K >> S;

        vector<int> A(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int result = countSubsequences(A, K, S, 0, 0, 0);
        cout << result << endl;
    }

    return 0;
}