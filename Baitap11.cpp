#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void findMostFrequent(const vector<int>& arr) {
    unordered_map<int, int> frequencyMap;

    // Đếm số lần xuất hiện của từng phần tử trong mảng
    for (int num : arr) {
        frequencyMap[num]++;
    }

    int mostFrequentElement = arr[0];
    int mostFrequentCount = frequencyMap[arr[0]];

    // Tìm phần tử có số lần xuất hiện nhiều nhất
    for (auto it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        if (it->second > mostFrequentCount) {
            mostFrequentElement = it->first;
            mostFrequentCount = it->second;
        }
    }

    cout << "Số có số lần xuất hiện nhiều nhất: " << mostFrequentElement << " - Số lần xuất hiện: " << mostFrequentCount << endl;
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

    findMostFrequent(arr);

    return 0;
}





//Sử dụng using namespace std;
//Kiểm tra điều kiện của n
//Dùng function C++