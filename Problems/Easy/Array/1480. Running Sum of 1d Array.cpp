/*
Runtime: 4 ms, faster than 58.13% of C++ online submissions for Running Sum of 1d Array.
Memory Usage: 8.5 MB, less than 31.80% of C++ online submissions for Running Sum of 1d Array.
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1;i<nums.size();i++){
            nums[i] = nums[i-1] +nums[i];
        }
    return nums;
    }
};