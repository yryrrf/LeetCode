/*
Runtime: 173 ms, faster than 15.06% of C++ online submissions for Wildcard Matching.
Memory Usage: 11.2 MB, less than 51.14% of C++ online submissions for Wildcard Matching.
*/
class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<bool>> dp(s.size()+1,vector<bool>(p.size()+1,false));
        dp[0][0] = true;
        
        for(int j = 1; j<=n; j++){
            if(p[j-1]!='*') break;
            dp[0][j] = true;
        }
        
        for(int i = 1; i<=m; i++){
            for(int j = 1; j<=n; j++){
                
                if(p[j-1]=='*'){
                    dp[i][j] = dp[i][j-1] || dp[i-1][j];
                }
                else if(p[j-1]=='?' || p[j-1] == s[i-1]){
                    dp[i][j] = dp[i-1][j-1];
                }
                
            }
        }
        
        return dp[dp.size()-1][dp[0].size()-1];
    }
};