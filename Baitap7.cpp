#include <iostream>
#include <vector>

using namespace std;

int countOccurrences(const vector<int>& arr, int x) {
    int count = 0;
    for (int num : arr) {
        if (num == x) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Nhập số lượng số trong mảng (n): ";
    cin >> n;

    while (n < 1 || n > 100000) {
        cout << "Số lượng số không hợp lệ. Vui lòng nhập lại: ";
        cin >> n;
    }

    vector<int> arr(n);
    cout << "Nhập " << n << " số trong mảng: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Nhập số nguyên x: ";
    cin >> x;

    int occurrenceCount = countOccurrences(arr, x);
    cout << "Số lần xuất hiện của x trong mảng: " << occurrenceCount << endl;

    return 0;
}



//Sử dụng using namespace std;
//Kiểm tra điều kiện của n
//Dùng function C++