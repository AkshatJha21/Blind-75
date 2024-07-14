#include<iostream>
#include<vector>
using namespace std;

int maxSubarraySum(vector<int> &nums) {
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];

        maxi = max(maxi, sum);

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxi;
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

    cout << maxSubarraySum(arr) << endl;
}