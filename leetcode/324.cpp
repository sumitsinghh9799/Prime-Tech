#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        int n = nums.size();

        int left = (n - 1) / 2;
        int right = n - 1;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                nums[i] = temp[left--];
            else
                nums[i] = temp[right--];
        }
    }
};

int main() {
    vector<int> nums = {1, 5, 1, 1, 6, 4};

    Solution obj;
    obj.wiggleSort(nums);

    cout << "Wiggle Sorted Array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

   return 0;
}