#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void findSmallestIndices(const vector<int>& arr) {
    int n = arr.size();
    int smallest = numeric_limits<int>::max();
    int secondSmallest = numeric_limits<int>::max();
    int smallestIndex = -1;
    int secondSmallestIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            secondSmallestIndex = smallestIndex;
            smallest = arr[i];
            smallestIndex = i;
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
            secondSmallestIndex = i;
        }
    }

    cout << "Vị trí của số nhỏ nhất: " << smallestIndex + 1 << " - Giá trị: " << smallest << endl;
    cout << "Vị trí của số nhỏ thứ hai: " << secondSmallestIndex + 1 << " - Giá trị: " << secondSmallest << endl;
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

    findSmallestIndices(arr);

    return 0;
}





//Sử dụng using namespace std;
//Kiểm tra điều kiện của n
//Dùng function C++