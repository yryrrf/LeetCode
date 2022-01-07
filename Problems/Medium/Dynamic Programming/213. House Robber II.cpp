/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for House Robber II.
Memory Usage: 7.9 MB, less than 36.28% of C++ online submissions for House Robber II.
*/
class Solution {
public:
    int rob(vector<int>& nums) {
        int length = nums.size();
        
        if(length==1){
            return nums[0];
        }else if(length ==2){
            return max(nums[0],nums[1]);
        }
        
        vector<int> dp(length);
        
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        
        for(int i = 2; i<length-1; i++){
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }

        int ans = dp[length-2];
        
        dp[0] = 0;
        dp[1] = nums[1];
        
        for(int i = 2; i<length; i++){
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }
        
        ans = max(ans,dp[length-1]);
        return ans;
    }
};