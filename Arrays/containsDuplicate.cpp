#include<iostream>
#include<vector>
using namespace std;

bool containsDuplicate(vector<int> &nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << containsDuplicate(arr) << endl;
    
}