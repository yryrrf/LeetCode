/*
Runtime: 192 ms, faster than 14.79% of C++ online submissions for Egg Drop With 2 Eggs and N Floors.
Memory Usage: 7 MB, less than 26.05% of C++ online submissions for Egg Drop With 2 Eggs and N Floors.
*/
class Solution {
public:
    int twoEggDrop(int n) {
        vector<vector<int>> dp(2,vector<int>(n+1,INT_MAX));
        dp[0][0] = dp[1][0] = 0;
        for(int i = 1; i<dp[0].size(); i++){
            dp[0][i] = i;
        }
        for(int i = 1; i<dp[0].size(); i++){
            for(int j = 1; j<=i;j++){
                dp[1][i] = min(dp[1][i],max(dp[0][j-1]+1,dp[1][i-j]+1));  
            }
        }
        return dp[1][n];
    }
};
