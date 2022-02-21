/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
Memory Usage: 6.2 MB, less than 10.53% of C++ online submissions for Fibonacci Number.
*/
class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1);
        dp[0] = 0;
        if(n>0) dp[1] = 1;
        for(int i = 2; i<n+1; i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};