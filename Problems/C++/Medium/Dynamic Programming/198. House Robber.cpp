/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for House Robber.
Memory Usage: 7.7 MB, less than 40.53% of C++ online submissions for House Robber.
*/
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);   
        for(int i = 2 ; i < nums.size() ; i++){
            dp[i] = max(dp[i-2]+nums[i],dp[i-1]);
        }
        
        return dp[dp.size()-1];
    }
};