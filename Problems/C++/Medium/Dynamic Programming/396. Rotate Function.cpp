/*
Runtime: 287 ms, faster than 16.35% of C++ online submissions for Rotate Function.
Memory Usage: 100.4 MB, less than 14.44% of C++ online submissions for Rotate Function.
*/
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        int f = 0;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++) {
            sum+=nums[i];
            f+=i*nums[i];
        }
        int ans = f;
        for(int i = 1; i<nums.size(); i++) {
            f = f + sum - (nums.size())*nums[nums.size()-i];
            ans = max(ans,f);
        }
        return ans;
    }
};