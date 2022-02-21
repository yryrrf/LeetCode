/*
Runtime: 8 ms, faster than 47.38% of C++ online submissions for Regular Expression Matching.
Memory Usage: 7 MB, less than 59.15% of C++ online submissions for Regular Expression Matching.
*/
class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<bool>> dp(s.size()+1,vector<bool>(p.size()+1));
        dp[0][0] = true;
        for(int i = 0; i<dp.size(); i++){
            for(int j = 1; j<dp[0].size(); j++){
                if(p[j-1]=='*'){
                    dp[i][j] = dp[i][j-2];
                    if(i>0 && (s[i-1] == p[j-2] || p[j-2]=='.')){
                        dp[i][j] = dp[i][j] || dp[i-1][j];
                    }
                }else{
                    if(i>0 && (s[i-1] == p[j-1] || p[j-1]=='.')){
                        dp[i][j]= dp[i-1][j-1];
                    }
                }
            }
        }
        
        return dp[dp.size()-1][dp[0].size()-1];
    }
};


