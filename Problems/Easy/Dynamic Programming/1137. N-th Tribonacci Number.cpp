/*
Runtime: 4 ms, faster than 6.25% of C++ online submissions for N-th Tribonacci Number.
Memory Usage: 6.1 MB, less than 18.73% of C++ online submissions for N-th Tribonacci Number.
*/
class Solution {
public:
    int tribonacci(int n) {
        vector<int> dp(n+1);
        if(n>0) dp[1] = 1;
        if(n>1) dp[2] = 1;
        for(int i = 3; i<n+1; i++){
            dp[i] = dp[i-3] + dp[i-2] + dp[i-1];
        }
        return dp[n];
    }
};

