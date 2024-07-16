#include<iostream>
#include<vector>
using namespace std;

int mostWaterInContainer(vector<int> &height) {
    int n = height.size();
    int left = 0, right = n - 1;
    int maxm = INT_MIN;

    while (left < right) {
        int area = (right - left) * min(height[left], height[right]);
        maxm = max(maxm, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxm;
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

    cout << mostWaterInContainer(arr) << endl;
    
}