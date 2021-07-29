/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Target Sum.
Memory Usage: 9.3 MB, less than 49.04% of C++ online submissions for Target Sum.
*/
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for(int num : nums) sum+=num;
        int diff = sum - target;
        if(diff<0 or diff%2!=0) return 0;
        diff/=2;
        vector<int> dp(diff+1);
        dp[0]=1;
        
        for(int num : nums){
            for(int j = diff; j>=num; j--){
                dp[j] += dp[j-num];
            }
        }
        
        return dp[dp.size()-1];
    }  
};