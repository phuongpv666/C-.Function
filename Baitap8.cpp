#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int countAndListPrimes(const vector<int>& arr, int x, vector<int>& primes) {
    int count = 0;
    for (int num : arr) {
        if (num != x && isPrime(num)) {
            count++;
            primes.push_back(num);
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

    vector<int> primeNumbers;
    int primeCount = countAndListPrimes(arr, x, primeNumbers);

    cout << "Số lượng số nguyên tố cùng nhau với x trong mảng: " << primeCount << endl;
    cout << "Các số nguyên tố cùng nhau với x trong mảng: ";
    for (int num : primeNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}




//Sử dụng using namespace std;
//Kiểm tra điều kiện của n
//Dùng function C++