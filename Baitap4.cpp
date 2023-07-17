#include <iostream>
using namespace std;

int countEvenDigits(int num) {
    int count = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int countOddDigits(int num) {
    int count = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int n;
    cout << "Nhap vao so luong so trong day: ";
    cin >> n;

    if (n < 1 || n > 100000) {
        cout << "So luong phan tu khong hop le.";
        return 0;
    }

    cout << "Nhap vao " << n << " so trong day: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        int evenCount = countEvenDigits(num);
        int oddCount = countOddDigits(num);
        cout << "So luong chu so chan: " << evenCount << endl;
        cout << "So luong chu so le: " << oddCount << endl;
    }

    return 0;
}

