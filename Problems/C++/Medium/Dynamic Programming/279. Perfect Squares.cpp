/*
Runtime: 361 ms, faster than 27.95% of C++ online submissions for Perfect Squares.
Memory Usage: 9.1 MB, less than 45.10% of C++ online submissions for Perfect Squares.
*/
class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        for(int i = 1; i<dp.size(); i++){
            dp[i] = dp[i-1] + 1;
            for(int j = 1; j*j<=i; j++){
                dp[i] = min(dp[i], dp[i-j*j]+1);
            }
        }
        return dp[n];
    }
};