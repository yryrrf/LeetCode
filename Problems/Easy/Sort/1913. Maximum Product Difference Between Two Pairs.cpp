/*
Runtime: 20 ms, faster than 33.33% of C++ online submissions for Maximum Product Difference Between Two Pairs.
Memory Usage: 20.3 MB, less than 16.67% of C++ online submissions for Maximum Product Difference Between Two Pairs.
*/
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return (nums[n-1]*nums[n-2])-(nums[0]*nums[1]);
    }
};