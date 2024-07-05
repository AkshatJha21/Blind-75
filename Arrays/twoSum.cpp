#include<iostream>
#include<vector>
using namespace std;

void twoSum(vector<int> arr, int target) {
    int n = arr.size();
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << left << " " << right << endl;
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    cout << "-1 -1" << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    int k;
    cin >> k;

    twoSum(arr, k);
}