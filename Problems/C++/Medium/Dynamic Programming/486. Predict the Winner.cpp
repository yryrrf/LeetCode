/*
Runtime: 4 ms, faster than 61.82% of C++ online submissions for Predict the Winner.
Memory Usage: 7.6 MB, less than 37.30% of C++ online submissions for Predict the Winner.
*/
class Solution {
public:
    bool PredictTheWinner(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(), vector<int>(nums.size(),0));
        for(int i = 0; i<nums.size(); i++){
            dp[i][i] = nums[i];
        }
        for(int i = nums.size()-2; i>=0; i--){
            for(int j = i+1; j<nums.size(); j++){
                dp[i][j] = max(nums[i]-dp[i+1][j], nums[j]-dp[i][j-1]);
            }
        }
        return dp[0][dp.size()-1]>=0;
    }
};