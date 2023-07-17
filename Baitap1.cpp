#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Số lượng phần tử tối đa của mảng

int arr[MAX_SIZE]; // Khai báo mảng arr như một biến toàn cục

void findMaxTwoNumbers(int n) {
    int max1 = arr[0]; // Số lớn nhất
    int max2 = arr[0]; // Số lớn thứ hai

    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    cout << "So lon nhat: " << max1 << endl;
    cout << "So lon thu hai: " << max2 << endl;
}

int main() {
    int n;
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;

    if (n < 2 || n > MAX_SIZE) {
        cout << "So luong phan tu khong hop le.";
        return 0;
    }

    cout << "Nhap vao cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findMaxTwoNumbers(n);

    return 0;
}
