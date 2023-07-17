#include <iostream>
#include <vector>

using namespace std;

void findMinMax(const vector<int>& arr) {
    int n = arr.size();
    int minValue = arr[0];
    int maxValue = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] <= minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] >= maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    cout << "Số lớn nhất: " << maxValue << " - Vị trí cuối cùng: " << maxIndex + 1 << endl;
    cout << "Số nhỏ nhất: " << minValue << " - Vị trí cuối cùng: " << minIndex + 1 << endl;
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

    findMinMax(arr);

    return 0;
}




//Sử dụng using namespace std;
//Kiểm tra điều kiện của n
//Dùng function C++