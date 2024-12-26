#include <iostream>
#include <vector>
using namespace std;

int searchNumber(int k, vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == k) {
            return i + 1; // 1-based indexing
        }
    }
    return -1; // If not found
}

int main() {
    int k = 16;
    vector<int> arr = {9, 7, 16, 16, 4};
    cout << "Position of first occurrence: " << searchNumber(k, arr) << endl;

    k = 98;
    arr = {1, 22, 57, 47, 34, 18, 66};
    cout << "Position of first occurrence: " << searchNumber(k, arr) << endl;

    return 0;
}
