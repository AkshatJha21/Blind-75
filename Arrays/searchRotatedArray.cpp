// Search in rotated sorted array
#include<iostream>
#include<vector>
using namespace std;

int searchTarget(vector<int> &nums, int target) {
    int n = nums.size();
    int left = 0, right = n - 1;
    int index = -1;

    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (nums[mid] == target) {
            index = mid;
        }

        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target <= nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            if (nums[mid] <= target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return index;
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

    int k;
    cin >> k;
    
    cout << searchTarget(ans, k);
}