/*
Runtime: 8 ms, faster than 17.21% of C++ online submissions for Search Insert Position.
Memory Usage: 9.7 MB, less than 52.34% of C++ online submissions for Search Insert Position.
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pre=INT_MIN;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==target) return i;
            if(pre<target and nums[i]>target) return i;
            pre = nums[i];
        }
        return nums.size();
    }
};