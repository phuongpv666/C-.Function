#include <iostream>
#include <vector>

using namespace std;

// Hàm tính giá trị trung bình của mảng
double calculateAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return static_cast<double>(sum) / arr.size();
}

int main() {
    int n;
    cout << "Nhập số lượng số trong mảng (n): ";
    cin >> n;

    // Kiểm tra điều kiện n
    while (n < 1 || n > 100000) {
        cout << "Số lượng số không hợp lệ. Vui lòng nhập lại: ";
        cin >> n;
    }

    vector<int> arr(n);
    cout << "Nhập " << n << " số trong mảng: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    double average = calculateAverage(arr);
    cout << "Giá trị trung bình của các số trong mảng: " << average << endl;

    return 0;
}


//Sử dụng using namespace std;
//Kiểm tra điều kiện của n
//Dùng function C++