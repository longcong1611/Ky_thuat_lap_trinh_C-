#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--)
    {
        string B;
        cin >> B;
        int n = B.size();
        vector<int> zeros(n + 1, 0); // khởi tạo n + 1 phần tử với mỗi phần tử có giá trị ban đầu bằng 0
        vector<int> ones(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            zeros[i] = zeros[i - 1] + (B[i - 1] == '0'); //(B[i - 1] == '0'): bằng 1 nếu đúng, 0 nếu sai
            ones[i] = ones[i - 1] + (B[i - 1] == '1');
        }

        int max_diff = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                int num_zeros = zeros[j] - zeros[i];
                int num_ones = ones[j] - ones[i];
                if (num_zeros == 0) {
                    continue;
                }
                max_diff = max(max_diff, num_zeros - num_ones);
            }
        }

        cout << max_diff << endl;
    }
    return 0;
}