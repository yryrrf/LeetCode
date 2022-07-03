/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of People Aware of a Secret.
Memory Usage: 6.7 MB, less than 66.67% of C++ online submissions for Number of People Aware of a Secret.
*/
class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> dp(n+1, 0LL);
        dp[1] = 1LL;
        int mod = 1e9+7;
        long long tmp = 0;
        int ans = 0;
        for(int i = 2; i<dp.size(); i++) {
            dp[i] = tmp = (tmp + dp[max(i-delay,0)] - dp[max(i-forget,0)]+mod)%mod;
        }
        for (int i = n - forget + 1; i <= n; ++i) ans = (ans + dp[i]) % mod;
        return ans;
    }
};