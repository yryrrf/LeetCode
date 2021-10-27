/*
Runtime: 92 ms, faster than 55.62% of C++ online submissions for Coin Change.
Memory Usage: 14.5 MB, less than 26.37% of C++ online submissions for Coin Change.
*/
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1, amount+1);
        dp[0] = 0;
        for(int i = 1; i<=amount; i++){
            for(int j = 0; j<coins.size(); j++){
                if(coins[j]<=i){
                   dp[i] = min(dp[i], dp[i-coins[j]]+1); 
                }              
            }
        }
        return dp[amount] > amount ? -1 : dp[amount];
    }
};