// Chuỗi đối xứng
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& str, int low, int high) {
    // Base case: Nếu chỉ còn một ký tự hoặc không có ký tự nào
    if (low >= high) {
        return true;
    }

    // Kiểm tra xem ký tự đầu và cuối có giống nhau không
    if (str[low] != str[high]) {
        return false;
    }

    // Kiểm tra phần còn lại của chuỗi
    return isPalindrome(str, low + 1, high - 1);
}

int main() {
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        string str;
        cin >> str;

        bool result = isPalindrome(str, 0, str.length() - 1);
        cout << result << endl;
    }

    return 0;
}