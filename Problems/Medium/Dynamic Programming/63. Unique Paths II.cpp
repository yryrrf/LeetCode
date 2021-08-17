class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size(),0));
        
        for(int i = 0; i<dp.size() and obstacleGrid[i][0] == 0; i++){
            dp[i][0]=1;
        } 
        
        for(int j = 0; j<dp[0].size() and obstacleGrid[0][j] == 0; j++){
            dp[0][j]=1;
        } 
        
        for(int i = 1; i<dp.size(); i++){
            for(int j = 1; j<dp[0].size(); j++){
                if(obstacleGrid[i][j] == 1) {
                    continue;
                }
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        return dp[dp.size()-1][dp[0].size()-1];
    }    
};