#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Hàm kiểm tra số chính phương
bool isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}

int main() {
    int n;
    cout << "Nhập số lượng số trong mảng (n): ";
    cin >> n;

    // Kiểm tra điều kiện của n
    while (n < 1 || n > 100) {
        cout << "Số lượng số không hợp lệ. Vui lòng nhập lại: ";
        cin >> n;
    }

    vector<int> arr(n);
    cout << "Nhập " << n << " số trong mảng: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int count = 0;
    vector<int> perfectSquares;
    for (int num : arr) {
        if (isPerfectSquare(num)) {
            count++;
            perfectSquares.push_back(num);
        }
    }

    cout << "Số lượng số chính phương trong mảng: " << count << endl;
    cout << "Các số chính phương trong mảng: ";
    for (int num : perfectSquares) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


//Sử dụng using namespace std;
//Kiểm tra điều kiện của n
//Dùng function C++