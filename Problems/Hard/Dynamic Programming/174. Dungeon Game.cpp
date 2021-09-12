/*
Runtime: 9 ms, faster than 18.75% of C++ online submissions for Dungeon Game.
Memory Usage: 9 MB, less than 14.90% of C++ online submissions for Dungeon Game.
*/
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        vector<vector<int>> dp(dungeon.size()+1,vector<int>(dungeon[0].size()+1,INT_MAX));
        dp[dp.size()-1][dp[0].size()-2] = dp[dp.size()-2][dp[0].size()-1] = 1;
        
        for(int i = dp.size()-2; i>=0; i--){
            for(int j = dp[0].size()-2; j>=0; j--){
                dp[i][j] = max(min(dp[i+1][j],dp[i][j+1])-dungeon[i][j],1);
            }
        }
        return dp[0][0];
    }
};