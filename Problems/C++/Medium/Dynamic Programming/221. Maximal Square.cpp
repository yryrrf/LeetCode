/*
Runtime: 16 ms, faster than 99.44% of C++ online submissions for Maximal Square.
Memory Usage: 12 MB, less than 16.02% of C++ online submissions for Maximal Square.
*/
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size()));
        int maxSum = 0;
        for(int i = 0; i<matrix.size(); i++) {
            if(matrix[i][0] == '1') maxSum = 1;
            dp[i][0] = (int)matrix[i][0]-'0';
        }
        
        for(int j = 0; j<matrix[0].size(); j++) {
            if(matrix[0][j] == '1') maxSum = 1;
            dp[0][j] = (int)matrix[0][j]-'0';
        }
        
        for(int i = 1; i<matrix.size(); i++){
            for(int j = 1; j<matrix[0].size(); j++){
                if(matrix[i][j] == '0') {
                    dp[i][j] = 0;
                    continue;
                }
                dp[i][j] = min(dp[i][j-1], min(dp[i-1][j], dp[i-1][j-1])) + 1 ;
                maxSum = max(dp[i][j], maxSum);
            }
        }
        
        return maxSum*maxSum;
    }
};