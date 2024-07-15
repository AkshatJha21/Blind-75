//FIND MINIMUM IN ROTATED SORTED ARRAY
#include<iostream>
#include<vector>
using namespace std;

int minimumElemRotatedArray(vector<int> &nums) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    int minm = INT_MAX;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[left] <= nums[right]) {
            minm = min(minm, nums[left]);
            break;
        }

        if (nums[left] <= nums[mid]) {
            minm = min(minm, nums[left]);
            left = mid + 1;
        } else {
            minm = min(minm, nums[mid]);
            right = mid - 1;
        }
    }

    return minm;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        ans.push_back(num);
    }

    cout << minimumElemRotatedArray(ans) << endl;
    
}