/*
Runtime: 17 ms, faster than 5.55% of C++ online submissions for Best Time to Buy and Sell Stock II.
Memory Usage: 13.3 MB, less than 5.17% of C++ online submissions for Best Time to Buy and Sell Stock II.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp(prices.size());
        dp[0] = 0;
        for(int i = 1; i<dp.size(); i++){
            dp[i] = max(dp[i-1],prices[i]-prices[i-1]+dp[i-1]);
        }
        return dp[dp.size()-1];
    }
};