/*
Runtime: 9 ms, faster than 5.86% of C++ online submissions for Integer Break.
Memory Usage: 6.3 MB, less than 7.73% of C++ online submissions for Integer Break.
*/
class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1,0);
        for(int i = 0; i<dp.size(); i++) {
            for(int j = 0; j<i; j++) {
                dp[i] = max(max(j * dp[i-j], j*(i-j)), dp[i]);
            }
        }
        return dp[dp.size()-1];
    }
};