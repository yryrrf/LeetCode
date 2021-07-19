/*
38 / 62 test cases passed.
Status: Time Limit Exceeded
*/
class Solution {
public:
    int count=0;
    int m, n;
    int uniquePaths(int m, int n) {
        this->m = m;
        this->n = n;
        backtracking(0,0);  
        return count;
    }
    
    void backtracking(int i,int j){
        if(i>=m or j>=n) return;
        if(i==m-1 and j==n-1){
            count+=1;
            return;
        }
        backtracking(i+1,j);
        backtracking(i,j+1);
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Paths.
Memory Usage: 6.5 MB, less than 31.86% of C++ online submissions for Unique Paths.
*/

class Solution {
public:
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n));
        for(int i = 0 ;i<m;i++){
            dp[i][0] = 1;
        }
        
        for(int i = 0;i<n;i++){
            dp[0][i] = 1;
        }

        for(int i = 1;i<m;i++){
            for(int j = 1;j<n;j++){
                dp[i][j] = dp[i][j-1]+dp[i-1][j];
            }
        }
        
        return dp[m-1][n-1];
    }
    
    
};