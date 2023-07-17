#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cout << "Nhap vao so luong so nguyen trong day: ";
    cin >> n;

    if (n < 1 || n > 10000) {
        cout << "So luong phan tu khong hop le.";
        return 0;
    }

    int countPrime = 0;

    cout << "Nhap vao " << n << " so nguyen trong day: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (isPrime(num)) {
            countPrime++;
        }
    }

    cout << "So luong so nguyen to trong day: " << countPrime << endl;

    return 0;
}
