/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
Memory Usage: 6.2 MB, less than 13.24% of C++ online submissions for Climbing Stairs.
*/
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i = 2;i<dp.size();i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Climbing Stairs.
Memory Usage: 5.7 MB, less than 97.12% of C++ online submissions for Climbing Stairs.
*/
class Solution {
public:
    int climbStairs(int n) {
        int result = 1;
        int curr = 1;
        int pre = 1;
        for(int i = 2;i<n+1;i++){
            result = curr + pre;
            pre = curr;
            curr = result;
        }
        return result;
    }
};