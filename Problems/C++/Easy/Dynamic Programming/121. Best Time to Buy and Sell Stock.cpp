/*
Runtime: 120 ms, faster than 53.43% of C++ online submissions for Best Time to Buy and Sell Stock.
Memory Usage: 97.3 MB, less than 6.33% of C++ online submissions for Best Time to Buy and Sell Stock.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        vector<int> dp(prices.size());
        dp[0] = 0;
        int minPrice = prices[0];
        for(int i = 1; i < prices.size(); i++){
            dp[i] = max(dp[i-1],prices[i]-minPrice);
            minPrice = min(minPrice,prices[i]);
        }
        return dp[dp.size()-1];
    }
};