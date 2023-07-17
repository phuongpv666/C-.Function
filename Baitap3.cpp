#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num) {
    int reverseNum = 0;
    int originalNum = num;

    while (num > 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    return (originalNum == reverseNum);
}

int main() {
    int n;
    cout << "Nhap vao so luong so trong day: ";
    cin >> n;

    if (n < 1 || n > 100000) {
        cout << "So luong phan tu khong hop le.";
        return 0;
    }

    vector<int> numbers;
    cout << "Nhap vao " << n << " so trong day: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    int countPalindrome = 0;
    vector<int> palindromeNumbers;

    for (int i = 0; i < n; i++) {
        if (isPalindrome(numbers[i])) {
            countPalindrome++;
            palindromeNumbers.push_back(numbers[i]);
        }
    }

    cout << "So luong so thuan nghich trong day: " << countPalindrome << endl;
    cout << "Cac so thuan nghich trong day: ";
    for (int i = 0; i < palindromeNumbers.size(); i++) {
        cout << palindromeNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
