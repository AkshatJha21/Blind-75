#include<iostream>
#include<vector>
using namespace std;

void productOfArrExceptSelf(vector<int> nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    int prefix = 1;
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    int postfix = 1;
    for (int i = n - 1; i >= 0; i++) {
        ans[i] *= postfix;
        postfix *= nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
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

    productOfArrExceptSelf(arr);
}