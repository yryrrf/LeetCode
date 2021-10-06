/*
Runtime: 44 ms, faster than 21.75% of C++ online submissions for Distinct Subsequences.
Memory Usage: 29.9 MB, less than 13.05% of C++ online submissions for Distinct Subsequences.
*/
class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<unsigned long long>> dp(t.size()+1,vector<unsigned long long>(s.size()+1));
        
        for(int j = 0; j<dp[0].size(); j++) dp[0][j] = 1;
        
        for(int i = 1; i<dp.size(); i++){
            for(int j = 1; j<dp[0].size(); j++){
                if(t[i-1]!=s[j-1]){
                    dp[i][j] = dp[i][j-1];
                }else{
                    dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
                }
            }
        }
        return dp[dp.size()-1][dp[0].size()-1];
    }
};