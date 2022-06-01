/*
Runtime: 256 ms, faster than 25.19% of C++ online submissions for Grid Game.
Memory Usage: 75 MB, less than 8.14% of C++ online submissions for Grid Game.
*/
class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        vector<vector<long long>> dp(2,vector<long long>(grid[0].size()+1,0));
        for(int i = 1; i<=grid[0].size();i++){
            dp[0][i] = grid[0][i-1] + dp[0][i-1];
            dp[1][i] = grid[1][i-1] + dp[1][i-1];
        }

        long long ans = LLONG_MAX;
        for(int i = 1;i<=grid[0].size(); i++){
            ans = min(ans,max(dp[0][grid[0].size()]-dp[0][i],dp[1][i-1]));
        }

        return ans;
    }
    
    long long max(long long l1, long long l2){
        return l1>l2?l1:l2;
    }
    
    long long min(long long l1, long long l2){
        return l1<l2?l1:l2;
    }
};

