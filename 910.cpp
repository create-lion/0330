/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int result = nums[n-1] - nums[0]; // 原始差

        for (int i = 0; i < n - 1; i++) {
            int high = max(nums[n-1] - k, nums[i] + k);
            int low = min(nums[0] + k, nums[i+1] - k);

            result = min(result, high - low);
        }

        return result;
    }
};